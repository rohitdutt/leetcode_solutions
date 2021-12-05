function calculateDaysBetweenDates(startDate, endDate) {
    // Convert both dates to milliseconds
    var date1_ms = startDate.getTime();
    var date2_ms = endDate.getTime();
    
    // Calculate the difference in milliseconds
    var difference_ms = date2_ms - date1_ms;
    
    // Convert back to days and return
    return Math.round(difference_ms/1000/60/60/24);
}

function getAverage(numbers) {
    var sum = 0;
    for (var i = 0; i < numbers.length; i++) {
        sum += numbers[i];
    }
    return sum / numbers.length;
}

function intersectionOfTwoLinkedLists(list1, list2) {
    var result = [];
    var current1 = list1.head;
    var current2 = list2.head;
    while (current1 != null && current2 != null) {
        if (current1.data == current2.data) {
            result.push(current1.data);
            current1 = current1.next;
            current2 = current2.next;
        } else if (current1.data < current2.data) {
            current1 = current1.next;
        } else {
            current2 = current2.next;
        }
    }
    return result;
}