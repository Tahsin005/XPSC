void TEST_CASE(){
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;

    if (ey >= sy and sx - sy >= ex - ey) {
        cout << (ey - sy) + (sx + ey - sy - ex) << el;
        return;
    }

    return void(cout << "-1" << el);
}