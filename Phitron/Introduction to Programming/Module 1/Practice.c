// 1️⃣ Why we need long long int
// English:
// We use long long int when we need to store very large integer values that cannot fit in a normal int.
// Example: population, large bank balance, big calculations, etc.
// বাংলা:
// আমরা long long int ব্যবহার করি যখন সংখ্যা অনেক বড় হয়, যা সাধারণ int ডেটা টাইপে রাখা যায় না।
// যেমন – জনসংখ্যা, বড় অঙ্কের টাকা, বড় হিসাব ইত্যাদি।
// ________________________________________
//  2️⃣ Rules for naming variables in C
// English:
// 1.	Can use letters (A–Z, a–z), digits (0–9), and underscore (_).
// 2.	Cannot start with a digit.
// 3.	No spaces allowed.
// 4.	No special symbols like @, #, $, %.
// 5.	Variable names are case-sensitive (Age ≠ age).
// 6.	Cannot use C keywords (like int, float, return).
// 7.	Should be meaningful.
// বাংলা:
// 1.	অক্ষর, সংখ্যা, ও _ ব্যবহার করা যায়।
// 2.	সংখ্যা দিয়ে শুরু করা যাবে না।
// 3.	নামের মাঝে স্পেস দেওয়া যাবে না।
// 4.	@, #, $, % এর মতো চিহ্ন ব্যবহার করা যাবে না।
// 5.	বড় ও ছোট হাতের অক্ষর আলাদা ধরা হয় (Age ≠ age)।
// 6.	C এর keyword দিয়ে নাম দেওয়া যাবে না (int, float ইত্যাদি)।
// 7.	নামটা অর্থবহ হওয়া ভালো।
// ________________________________________




//  3️⃣ C Program: Print 2nd number first, then 1st
// English Code:
// #include <stdio.h>
// int main()
// {
//     int a, b;

//     printf("Enter first number: ");
//     scanf("%d", &a);

//     printf("Enter second number: ");
//     scanf("%d", &b);

//     printf("Second number: %d\n", b);
//     printf("First number: %d\n", a);

//     return 0;
// }
