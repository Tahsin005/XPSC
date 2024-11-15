from fpdf import FPDF

# Create instance of FPDF class
pdf = FPDF()

# Add a page
pdf.add_page()

# Set font
pdf.set_font('Arial', 'B', 12)

# Title
pdf.cell(200, 10, txt="Explanation of INSERTED and DELETED Tables in SQL Server Triggers", ln=True, align='C')

# Set font for body text
pdf.set_font('Arial', '', 10)

# Add the content
content = """
In SQL Server, triggers are special stored procedures that are automatically executed or "triggered" in response to certain events on a particular table, such as INSERT, UPDATE, or DELETE actions. Triggers can be used to enforce business rules, validate data, or keep data in sync across tables by automatically updating related tables when specific events occur.

Explanation of Key Concepts:
Automatic Table Updates:
Triggers can automatically update a table when an action like INSERT, UPDATE, or DELETE happens in another table. For instance, if there’s a trigger on a Transactions table that automatically adjusts the inventory count in an Items table whenever a transaction record is added, this helps keep data consistent without requiring manual updates.

INSERTED and DELETED Temporary Tables:
When an INSERT, UPDATE, or DELETE occurs, SQL Server creates temporary tables known as INSERTED and DELETED to keep track of the data affected by the transaction:

INSERTED Table:
This table temporarily stores the new rows that are being added to the table during an INSERT or UPDATE operation. The INSERTED table has the same structure as the original table, and it allows the trigger to access and work with the new data.

For example: If a new row is inserted in the Transactions table, the INSERTED table holds the values for that new row so the trigger can access it and perform actions like updating the Items table.
DELETED Table:
This table temporarily stores the rows that are being removed from the table during a DELETE or UPDATE operation. Like INSERTED, the DELETED table also has the same structure as the original table, but it contains only the data that was removed.

For example: If a row is deleted from the Transactions table, the DELETED table holds the values of the deleted row. A trigger can access this data to take appropriate actions, like adjusting the inventory count in another table.
Both Tables in an UPDATE:
During an UPDATE, both the INSERTED and DELETED tables are used. The DELETED table holds the original values before the update, while the INSERTED table holds the new values. This allows the trigger to compare old and new data, enabling it to update other tables accordingly.

Example Trigger Workflow:
Imagine we have a Transactions table where each entry represents either a sale or a purchase of items. A trigger on the Transactions table is set up to automatically update the item_qoh (quantity on hand) field in an Items table whenever a transaction occurs. Here’s how it might work:

Transaction Insert:

When a new transaction row is inserted into the Transactions table, SQL Server creates an INSERTED table containing the data from the new row.
The trigger can then read from this INSERTED table to get details like the item_id, tran_quantity, and tran_type (sale or order) to determine whether to increase or decrease the item_qoh in the Items table.
Transaction Update:

If a transaction row is updated (e.g., changing the quantity sold), SQL Server creates both INSERTED and DELETED tables.
The DELETED table contains the old values, and the INSERTED table contains the new values.
The trigger can use these tables to compare the old and new values and make any necessary adjustments to the Items table.
Transaction Delete:

When a row is deleted from the Transactions table, SQL Server creates a DELETED table containing the values from the deleted row.
The trigger can use the DELETED table to reverse any previous adjustments made to the Items table when the transaction was originally recorded.
Why Use INSERTED and DELETED Tables?
These tables make it easy to reference the data being affected in real-time without modifying the original data directly. They provide:

Data Integrity: Automatic updates help maintain data accuracy across tables.
Automation: Reduces the need for manual checks and updates whenever changes happen.
Consistency: Ensures that changes in one table are always reflected in other related tables.
Sample Trigger
Here’s a simplified trigger using the INSERTED table to automatically adjust the item_qoh in the Items table whenever a new transaction is inserted:

CREATE TRIGGER trg_update_item ON Transactions
FOR INSERT AS
BEGIN
    DECLARE @item_id CHAR(6), @tran_quantity INT, @tran_type CHAR(1);

    -- Retrieve values from the INSERTED temporary table
    SELECT @item_id = item_id, @tran_quantity = tran_quantity, @tran_type = tran_type
    FROM INSERTED;

    -- Adjust item quantity based on transaction type
    IF (@tran_type = 'S') -- Sale transaction
        UPDATE Items SET item_qoh = item_qoh - @tran_quantity WHERE item_id = @item_id;
    ELSE -- Purchase transaction
        UPDATE Items SET item_qoh = item_qoh + @tran_quantity WHERE item_id = @item_id;
END;
This trigger:

Accesses the INSERTED table for transaction details.
Checks if the transaction type is a sale or purchase.
Adjusts the item_qoh in the Items table by subtracting or adding the transaction quantity.
By using INSERTED and DELETED tables, SQL Server provides a straightforward way to manage real-time data consistency across tables automatically.
"""

# Add content to PDF
pdf.multi_cell(0, 10, content)

# Output the PDF to a file
pdf_output_path = '/mnt/data/trigger_inserted_deleted_explanation.pdf'
pdf.output(pdf_output_path)

# Return the file path
pdf_output_path
