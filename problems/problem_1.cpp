void problemSolution1(float consumed_water) {
    float cost = 13.0;  // Fixed amount

  
    const float rate1 = 0.4;
    const float rate2 = 0.12;
    const float rate3 = 1.4;
    const float additionalRate = 1.5;

    if (consumed_water > 30.0) {
        cost += 30.0 * rate1;
        if (consumed_water > 50.0) {
            cost += 20.0 * rate2;
            if (consumed_water > 60.0) {
                cost += 10.0 * rate3 + (consumed_water - 60.0) * additionalRate;
            } else {
                cost += (consumed_water - 50.0) * rate3;
            }
        } else {
            cost += (consumed_water - 30.0) * rate2;
        }
    } else {
        cost += consumed_water * rate1;
    }

    // Display the total cost
    std::cout << "Total cost: " << cost << std::endl;
}

    return cost;
}
