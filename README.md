# Intro

## The Journey Begins

### 1. add

Viết hàm trả về tổng của 2 số

***Thuật toán:***

\- B1: Nhận vào 2 số a và b

\- B2: Gán sum:=a+b

\- B3: return sum và kết thúc.

***Mã C++:***

int solution(int param1, int param2)

{

**return** param1 + param2;

}

### 2. Century from year

Cho một năm, trả về thế kỷ của nó. Thế kỷ đầu tiên kéo dài từ năm 1 đến
và bao gồm cả năm 100, thế kỷ thứ hai - từ năm 101 đến và bao gồm cả năm
200, v.v.

***Thuật toán:***

\- B1: Nhận vào một năm bất kỳ (1\<=year\<=2005)

\- B2: Gán century := (year+99) div 100

\- B3: return century

***Mã C++:***

int solution(int year)

{

**return** (year+99)/100;

}

### 3. checkPalindrome

Cho một chuỗi, hãy kiểm tra xem đó có phải là palindrome (đối xứng)
không?

***Thuật toán:***

\- B1: Nhận vào một chuỗi bất kỳ: inputString

\- B2: Gán str:=inputString

\- B3: Đảo ngược chuỗi str

\- B4: Nếu str giống với inputString, thì kết luận inputString là
palindrome. Ngược lại thì không.

***Mã C++:***

bool solution(string inputString)

{

string str = inputString;

reverse(str.begin(), str.end());

**return** str==inputString;

}

## Edge of the Ocean

### 4. AdjacentElementsProduct

Cho một mảng các số nguyên, tìm cặp phần tử liền kề có tích lớn nhất và
trả về tích đó.

***Thuật toán:***

\- B1: Nhận vào một mảng các số nguyên: a

\- B2: Gán largestProduct :=INT_MIN

\- B3: For i=1 to a.length()-1 then

Gán largestProduct := max(largestProduct, a\[i\]\*a\[i-1\]);

\- B4: return largestProduct và kết thúc.

***Mã C++:***

int solution(vector\<int\> inputArray)

{

int largestProduct = INT32_MIN;

**for** (int i = 1; i \< inputArray.size(); i++)

{

largestProduct = max(largestProduct, inputArray\[i\] \* inputArray\[i -
1\]);

}

**return** largestProduct;

}

### 5. shapeArea

Dưới đây chúng ta sẽ định nghĩa một n-đa giác thú vị. Nhiệm vụ của bạn
là tìm diện tích của một đa giác cho một n.

Một 1-đa giác đều là hình vuông có cạnh bằng chiều dài 1. Một n-đa giác
thú vị thu được bằng cách lấy (n-1)-đa giác thú vị và nối thêm 1-đa giác
thú vị vào vành của nó, cạnh nhau. Bạn có thể nhìn thấy 1-, 2-, 3- Và
4-đa giác thú vị trong hình dưới đây.

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image1.png){width="6.695138888888889in"
height="3.2576388888888888in"}

***Nhận xét:***

Ta thấy, diện tích của 1-đa giác thú vị bằng 1 ô vuông.

2-đa giác thú vị bằng 5 ô vuông, hay bằng 1-đa giác thú vị + 4 ô vuông

3-đa giác thú vị bằng 13 ô vuông, hay bằng 2-đa giác thú vị + 8 ô vuông

4-đa giác thú vị bằng 25 ô vuông, hay bằng 3-đa giác thú vị + 12 ô vuông

...

n-đa giác thú vị bằng (n-1)-đa giác thú vị + 4\*(n-1) ô vuông

Vì vậy, ở bài này, chúng ta có thể sử dụng đệ quy hoặc tìm ra công thức
tổng quát cho diện tích của n-đa giác thú vị.

Đặt S(n) là diện tích của n-đa giác thú vị

\- Công thúc đệ quy: S(n) = S(n-1) + 4\*(n-1)

\- Công thức tổng quát: S(n) = 1 + 4 + 8 + 12 + ... + 4\*(n-1) = 1 +
2\*n\*(n-1)

***Thuật toán:***

*[Sử dụng đệ quy:]{.underline}*

S(n):

Nếu n=1, thì trả về 1.

Ngược lại, trả về S(n-1) + 4\*(n-1)

*[Không dùng đệ quy:]{.underline}*

\- B1: Nhận vào số n

\- B2: Gán area := 1 + 2\*n\*(n-1)

\- B3: return area và kết thúc.

***Mã C++:***

int solution(int n)

{

**return** 1 + 2\*n\*(n-1);

}

### 6. makeArrayConsecutive2

Ratiorg có statues (các bức tượng) kích thước khác nhau như một món quà
từ CodeMaster nhân ngày sinh nhật của anh ấy, mỗi bức tượng có kích
thước nguyên không âm. Vì anh ấy thích làm cho mọi thứ trở nên hoàn hảo
nên anh ấy muốn sắp xếp chúng từ nhỏ nhất đến lớn nhất sao cho mỗi bức
tượng sẽ lớn hơn bức tượng trước một số chính xác bằng 1. Anh ta có thể
cần một số bức tượng bổ sung để có thể thực hiện được điều đó. Giúp anh
ta tìm ra số lượng tối thiểu các bức tượng bổ sung cần thiết.

***Nhận xét:***

Ta thấy, để Ratiorg sắp xếp được các bức tượng theo đúng tiêu chí mỗi
bức tượng sẽ lớn hơn bức tượng trước một số chính xác bằng 1, thì anh ấy
cần phải có tổng cộng (max - min + 1) bức tượng. Trong đó, max và min
lần lượt là kích thước lớn nhất và nhỏ nhất của các bức tượng mà anh ấy
đã nhận được từ CodeMaster.

Vì vậy, số lượng tối thiểu các bức tượng bổ sung cần thiết là: max -
min + 1 - số lượng bức tượng anh ấy đã có.

***Thuật toán:***

\- B1: Nhận vào mảng các số nguyên a là kích thước lần lượt của các bức
tượng mà anh ấy nhận được

\- B2: Gán maxSize = max(a\[ \]); minSize = min(a\[ \]), size = kích
thước mảng a

\- B3: Gán ketqua = maxSize - minSize + 1 -- size;

\- B4: return ketqua

Mã C++:

int solution(vector\<int\> statues)

{

**auto** minmax = minmax_element(statues.begin(), statues.end());

**return** \*minmax.second - \*minmax.first + 1 - statues.size();

}

### 7. almostIncreasingSequence

Cho một dãy các số nguyên dưới dạng một mảng, hãy xác định xem có thể có
được một dãy tăng nghiêm ngặt hay không bằng cách loại bỏ không quá một
phần tử khỏi mảng.

Lưu ý: trình tự a\[0\], a\[1\], \..., a\[n\] được coi là tăng nghiêm
ngặt nếu a\[0\] \< a\[1\] \< \... \< a\[n\]. Dãy chỉ chứa một phần tử
cũng được coi là tăng nghiêm ngặt.

***Nhận xét:***

Ta thấy, dãy chứa 1 phần tử cũng được coi là dãy tăng nghiêm ngặt. Khi
dãy có 2 phần tử a\[0\], a\[1\] thì xảy ra 2 trường hợp:

1.  a\[0\]\<a\[1\] → Dãy tăng nghiêm ngặt

2.  a\[0\]\>=a\[1\] → Ta chỉ cần loại bỏ 1 trong 2 phần tử sẽ thu được
    dãy tăng nghiêm ngặt

Điều này dẫn tới, khi số lượng phần tử của dãy nhỏ hơn 3 thì luôn thỏa
mãn yêu cầu đề bài.

Xét dãy số khi số lượng phần tử \>= 3:

Ta dùng count để đếm số cặp phần tử liền kề mà a\[i\] \>= a\[i+1\]

\- Khi dãy có 3 phần tử, thì chỉ có duy nhất 1 trường hợp không thỏa mãn
yêu cầu đề bài là: a\[0\] \>= a\[1\] \>= a\[2\].

\- Khi dãy có 4 phần tử a\[0\], a\[1\], a\[2\], a\[3\]:

1.  a\[0\] \< a\[1\]; a\[1\] \< a\[2\]; a\[2\] \< a\[3\] → Dãy tăng
    nghiêm ngặt (count = 0)

2.  a\[0\] \< a\[1\]; a\[1\] \< a\[2\]; a\[2\] \>= a\[3\] → Bỏ a\[3\] sẽ
    thu được dãy tăng nghiêm ngặt (count = 1) hoặc bỏ a\[2\] nếu a\[1\]
    \< a\[3\] cũng sẽ thu được dãy tăng nghiêm ngặt

3.  a\[0\] \< a\[1\]; a\[1\] \>= a\[2\]; a\[2\] \< a\[3\] → Bỏ a\[1\]
    (nếu a\[0\] \< a\[2\]) hoặc bỏ a\[2\] (nếu a\[1\] \< a\[3\]) thì sẽ
    thu được dãy tăng nghiêm ngặt. Còn nếu đồng thời a\[0\] \>= a\[2\]
    và a\[1\] \>= a\[3\] thì dãy này không thỏa mãn đề bài

4.  a\[0\] \< a\[1\]; a\[1\] \>= a\[2\]; a\[2\] \>= a\[3\] → Không thỏa
    mãn yêu cầu đề bài (count = 2)

5.  a\[0\] \>= a\[1\]; a\[1\] \< a\[2\]; a\[2\] \< a\[3\] → Bỏ a\[0\] sẽ
    thu được dãy tăng nghiêm ngặt (count = 1)

6.  a\[0\] \>= a\[1\]; a\[1\] \< a\[2\]; a\[2\] \>= a\[3\] → Không thỏa
    mãn yêu cầu đề bài (count = 2)

7.  a\[0\] \>= a\[1\]; a\[1\] \>= a\[2\]; a\[2\] \< a\[3\] → Không thỏa
    mãn yêu cầu đề bài (count = 2)

8.  a\[0\] \>= a\[1\]; a\[1\] \>= a\[2\]; a\[2\] \>= a\[3\] → Không thỏa
    mãn yêu cầu đề bài (count = 3)

\- Khi dãy có 5, 6,\...phần tử thì cũng tương tự với TH 4 phần tử

Ở đây, ta dùng biến count để đếm số cặp phần tử liên tiếp thỏa mãn
a\[i\] \>= a\[i+1\]. Duyệt dãy số từ đầu đến cuối, nếu count \> 1 hoặc
tồn tại trường hợp (a\[i\] \>= a\[i+1\] && a\[i-1\] \>= a\[i+1\] &&
a\[i\] \>= a\[i+2\]) thì dãy số không thỏa mãn yêu cầu của đề bài.

***Thuật toán:***

\- B1: Nhận vào dãy số a

\- B2: Gán size := a.size(), count:=0

\- B3: Nếu size \< 3 thì trả về false và kết thúc chương trình. Nếu
không, chuyển sang bước 4

\- B4: for i = 0 to size-1 then:

Nếu a\[i\]\>=a\[i+1\] thì count:=count+1;

Nếu count\>1 thì trả về false và kết thúc chương trình.

Nếu i\>0 và i\<size-2 và a\[i\]\>=a\[i+2\] và a\[i-1\]\>=a\[i+1\] thì
trả về false và kết thúc chương trình.

\- B5: Trả về true và kết thúc chương trình.

***Mã C++:***

bool solution(vector\<int\> sequence)

{

int size = sequence.size();

**if** (size \< 3)

{

**return** false;

}

int count = 0;

**for** (int i = 0; i \< size - 1; i++)

{

**if** (sequence\[i\] \>= sequence\[i + 1\])

{

count++;

**if** (count \> 1)

{

**return** false;

}

**if** (i \> 0 && i \< size - 2 && sequence\[i\] \>= sequence\[i + 2\]
&& sequence\[i - 1\] \>= sequence\[i + 1\])

{

**return** false;

}

}

}

**return** true;

}

### 8. matrixElementsSum

Sau khi trở nên nổi tiếng, CodeBots quyết định cùng nhau chuyển đến một
tòa nhà mới. Mỗi phòng có một mức giá khác nhau, và một số phòng miễn
phí, nhưng có tin đồn rằng tất cả các phòng miễn phí đều bị ma ám! Vì
CodeBots khá mê tín nên họ từ chối ở trong bất kỳ phòng miễn phí nào
hoặc bất kỳ phòng nào bên dưới bất kỳ phòng miễn phí nào .

Được cho matrix, một ma trận số nguyên hình chữ nhật, trong đó mỗi giá
trị đại diện cho giá phòng, nhiệm vụ của bạn là trả về tổng số tiền của
tất cả các phòng phù hợp với CodeBots (tức là: cộng tất cả các giá trị
không xuất hiện bên dưới một giá trị 0).

Ví dụ: với trường hợp bên dưới thì solution(matrix) = 5 + 1 + 2 = 9.

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image2.png){width="4.05in"
height="3.0416666666666665in"}

***Thuật toán:***

\- B1: Nhận vào một mảng 2 chiều A có kích thước (row x col)

\- B2: Gán sum := 0

\- B3: for j=0 to col-1 then:

for i = 0 to row-1 then:

Nếu A\[i\]\[j\] \> 0 thì sum := sum + a\[i\]\[j\];

Ngược lại, break;

\- B4: return sum và kết thúc.

***Mã C++:***

int solution(vector\<vector\<int\>\> matrix)

{

int row = matrix.size();

int col = matrix\[0\].size();

int sum = 0;

**for** (int j = 0; j \< col; j++)

{

**for** (int i = 0; i \< row; i++)

{

**if** (matrix\[i\]\[j\] != 0)

{

sum += matrix\[i\]\[j\];

}

**else**

{

**break**;

}

}

}

**return** sum;

}

## Smooth Sailing

### 9. allLongestStrings

Cho một mảng các chuỗi, trả về một mảng khác chứa tất cả các chuỗi dài
nhất của nó.

***Thuật toán:***

\- B1: Nhận vào một mảng các chuỗi S

\- B2: Gán maxLength :=0;

\- B3: Tạo một mảng các chuỗi result

\- B4: for i = 0 to S.size()-1 then:

Gán length := S\[i\].length()

Nếu length \> maxLength thì:

maxLength := length;

Xóa tất cả các phần tử trong result

Chèn S\[i\] vào result

Nếu length = maxLength thì:

Chèn S\[i\] vào result

\- B5: Trả về mảng result và kết thúc.

***Mã C++:***

vector\<string\> solution(vector\<string\> inputArray)

{

int maxLength = 0;

vector\<string\> result;

**for** (int i = 0; i \< inputArray.size(); i++)

{

int length = inputArray\[i\].length();

**if** (length \> maxLength)

{

maxLength = length;

result.clear();

result.insert(result.end(), inputArray\[i\]);

}

**else** **if** (length == maxLength)

{

result.insert(result.end(), inputArray\[i\]);

}

}

**return** result;

}

### 10. commonCharacterCount

Cho hai chuỗi, tìm số ký tự chung giữa chúng.

***Thuật toán:***

\- B1: Nhận vào 2 chuỗi s1 và s2

\- B2: Khởi tạo 2 mảng số nguyên t1 và t2 gồm 26 phần tử để đếm số ký tự
mỗi loại trong chuỗi s1 và s2

\- B3: for i = 0 to s1.length()-1 then:

t1\[s1\[i\]- 'a'\]++;

\- B4: for i = 0 to s2.length()-1 then:

t2\[s2\[i\]- 'a'\]++;

\- B5: Gán sum :=0

\- B6: for i = 0 to 25 then:

Gán sum := sum + min(t1\[i\], t2\[i\])

\- B7: return sum và kết thúc.

***Mã C++:***

int solution(string s1, string s2)

{

int t1\[26\] = {0};

int t2\[26\] = {0};

**for** (int i = 0; i \< s1.length(); i++)

{

t1\[s1\[i\] - \'a\'\]++;

}

**for** (int i = 0; i \< s2.length(); i++)

{

t2\[s2\[i\] - \'a\'\]++;

}

int sum = 0;

**for** (int i = 0; i \< 26; i++)

{

sum += min(t1\[i\], t2\[i\]);

}

**return** sum;

}

### 11. isLucky

Số vé thường bao gồm một số chẵn các chữ số. Một vé số được coi là may
mắn nếu tổng của nửa đầu của các chữ số bằng tổng của nửa sau.

Cho một số vé n, xác định xem nó có may mắn hay không.

***Thuật toán:***

\- B1: Nhận vào số nguyên n

\- B2: Gán s:=to_string(n)

\- B3: Gán sum1 = 0, sum2 = 0, len = s.length()

\- B4: for i = 0 to len/2 -- 1 then:

Gán sum1 := sum1 + s\[i\]

Gán sum2 := sum2 + s\[len-1-i\]

\- B5: Nếu sum1 = sum2 thì trả về true và kết thúc.

Ngược lại, trả về false và kết thúc

***Mã C++:***

bool solution(int n)

{

string s = to_string(n);

int sum1 = 0, sum2 = 0;

int len = s.size();

**for** (int i = 0; i \< len / 2; i++)

{

sum1 += s\[i\];

sum2 += s\[s.size() - 1 - i\];

}

**return** sum1 == sum2;

}

### 12. sortByHeight

Một số người đang đứng thành hàng trong công viên. Có những cái cây giữa
chúng không thể di chuyển được. Nhiệm vụ của bạn là sắp xếp lại những
người theo chiều cao của họ theo thứ tự không giảm dần mà không di
chuyển cây cối. Con người có thể rất cao!

Nhận vào mảng a. a\[i\] = -1 nếu đó là cây. Nếu không, a\[i\] là chiều
cao của một người.

***Thuật toán:***

\- B1: Nhận vào mảng a

\- B2: Gán size := a.size()

\- B3: for i = 0 to size-2 then:

Nếu a\[i\] = -1 thì:

continue;

for j = i+1 to size-1 then:

Nếu a\[j\] = -1 thì:

continue:

Nếu a\[j\] \> a\[i\] thì:

swap(a\[i\], a\[j\])

\- B4: Trả về mảng a sau khi đã sắp xếp và kết thúc.

***Mã C++:***

vector\<int\> solution(vector\<int\> a)

{

int size = a.size();

**for** (int i = 0; i \< size - 1; i++)

{

**if** (a\[i\] == -1)

{

**continue**;

}

**for** (int j = i + 1; j \< size; j++)

{

**if** (a\[j\] == -1)

{

**continue**;

}

**if** (a\[j\] \< a\[i\])

{

swap(a\[i\], a\[j\]);

}

}

}

**return** a;

}

### 13. reverseInParentheses

Viết hàm đảo ngược các ký tự trong dấu ngoặc đơn (có thể lồng nhau)
trong chuỗi nhập.

Chuỗi đầu vào sẽ luôn được định dạng tốt với kết hợp nhiều cặp dấu ().

***Thuật toán:***

\- B1: Nhận vào chuỗi ký tự str

\- B2: Gán len = str.length()

\- B3: Tạo stack\<int\> s

\- B4: for i = 0 to len-1 then:

Nếu str\[i\] = '(' thì đưa i vào trong stack

Nếu str\[i\] = ')' và stack s không rỗng thì:

Gán start = phần tử ở đỉnh của stack

Đảo ngược chuỗi str từ phần tử start+1 đến i-1;

\- B4: Loại bỏ tất cả ký tự '(' và ')' trong chuỗi str

\- B5: Trả về chuỗi str và kết thúc.

***Mã C++:***

string solution(string inputString)

{

int len = inputString.length();

stack\<int\> s;

**for** (int i = 0; i \< len; i++)

{

**if** (inputString\[i\] == \'(\')

{

s.push(i);

}

**else** **if** (inputString\[i\] == \')\' && !s.empty())

{

reverse(inputString.begin() + s.top() + 1, inputString.begin() + i);

s.pop();

}

}

**for** (int i = 0; i \< len; i++)

{

**if** (inputString\[i\] == \'(\' \|\| inputString\[i\] == \')\')

{

inputString.erase(i, 1);

i\--;

len\--;

}

}

**return** inputString;

}

## Exploring the Waters

### 14. alternatingSums

Một số người đang đứng thành một hàng và cần được chia thành hai đội.
Người thứ nhất vào đội 1 , người thứ hai vào đội 2 , người thứ ba lại
vào đội 1 , người thứ tư vào đội 2 , v.v.

Bạn được cung cấp một mảng các số nguyên dương - trọng số của mọi người.
Trả về một mảng gồm hai số nguyên, trong đó phần tử đầu tiên là tổng
trọng số của đội 1 và phần tử thứ hai là tổng trọng số của đội 2 sau khi
phép chia hoàn tất.

***Thuật toán:***

\- B1: Nhận vào mảng a

\- B2: Gán sum1 := 0, sum2 := 0

\- B3: for i = 0 to a.size()-1 then:

Nếu i chẵn thì gán sum1 := sum1 + a\[i\]

Ngược lại, gán sum2 := sum2 + a\[i\]

\- B4: Trả về mảng gồm 2 phần tử sum1 và sum2. Sau đó kết thúc.

***Mã C++:***

vector\<int\> solution(vector\<int\> a)

{

int sum1 = 0, sum2 = 0;

**for** (int i = 0; i \< a.size(); i++)

{

**if** (i % 2 == 0)

{

sum1 += a\[i\];

}

**else**

{

sum2 += a\[i\];

}

}

vector\<int\> result = {sum1, sum2};

**return** result;

}

### 15. addBorder

Đưa ra một ma trận ký tự hình chữ nhật, hãy thêm một đường viền dấu hoa
thị ( \*) với nó.

***Thuật toán:***

\- B1: Nhận vào mảng các chuỗi ký tự

\- B2: Duyệt toàn bộ mảng và thêm ký tự \* vào đầu và cuối mỗi chuỗi ký
tự

\- B3: Gán len := độ dài một chuỗi ký tự trong mảng

\- B4: Thêm chuỗi gồm len ký tự \* vào đầu và cuối mảng

\- B5. Trả về mảng sau khi chỉnh sửa và kết thúc.

***Mã C++:***

vector\<string\> solution(vector\<string\> picture)

{

**for** (int i = 0; i \< picture.size(); i++)

{

picture\[i\] = \"\*\" + picture\[i\] + \"\*\";

}

int len = picture\[0\].length();

picture.insert(picture.begin(), string(len, \'\*\'));

picture.insert(picture.end(), string(len, \'\*\'));

**return** picture;

}

### 16. areSimilar

Hai mảng được gọi là giống nhau nếu có thể lấy được mảng này từ mảng kia
bằng cách hoán đổi nhiều nhất một cặp phần tử của một trong các mảng.

Cho hai mảng a và b, kiểm tra xem chúng có giống nhau không .

***Thuật toán:***

\- B1: Nhập vào mảng a và b

\- B2: Gán size := a.size(); count := 0;

a1, a2, b1, b2

\- B3: for i=0 to size -1 then:

Nếu a\[i\] khác b\[i\] thì:

Gán count := count + 1;

Nếu count = 1 thì:

Gán a1 := a\[i\], b1 := b\[i\];

Nếu count = 2 thì:

Gán a2 := a\[i\], b2 := b\[i\];

Nếu count là giá trị khác thì break vòng lặp

\- B4: Nếu count = 0 thì trả về true và kết thúc.

Nếu count = 2 thì kiểm tra a1=b2 và a2=b1, nếu đúng thì trả về true và
kết thúc. Ngược lại, trả về false và kết thúc.

Nếu count là các giá trị khác thì trả về false và kết thúc.

\`

***Mã C++:***

bool solution(vector\<int\> a, vector\<int\> b)

{

int size = a.size();

int count = 0;

int a1, a2, b1, b2;

**for** (int i = 0; i \< size; i++)

{

**if** (a\[i\] != b\[i\])

{

count++;

**if** (count == 1)

{

a1 = a\[i\];

b1 = b\[i\];

}

**else** **if** (count == 2)

{

a2 = a\[i\];

b2 = b\[i\];

}

**else**

{

**break**;

}

}

}

**if** (count == 0)

{

**return** true;

}

**if** (count == 2)

{

**return** a1 == b2 && a2 == b1;

}

**return** false;

}

### 17. arrayChange

Bạn được cung cấp một mảng các số nguyên. Trên mỗi lần di chuyển, bạn
được phép tăng chính xác một phần tử của nó lên một phần tử. Tìm số lần
di chuyển tối thiểu cần thiết để có được một chuỗi tăng nghiêm ngặt từ
đầu vào.

***Thuật toán:***

\- B1: Nhận vào mảng các số nguyên A

\- B2: Gán temp := A\[0\] + 1; result := 0;

\- B3: for i = 0 to A.size()-1 then:

Nếu temp \> A\[i\] thì:

Gán result := result + temp -- A\[i\]

temp := temp + 1

Ngược lại, thì:

Gán temp := A\[i\] + 1;

\- B4: Trả về result và kết thúc.

***Mã C++:***

int solution(vector\<int\> inputArray)

{

int temp = inputArray\[0\] + 1;

int result = 0;

**for** (int i = 1; i \< inputArray.size(); i++)

{

**if** (temp \> inputArray\[i\])

{

result += temp - inputArray\[i\];

temp++;

}

**else**

{

temp = inputArray\[i\] + 1;

}

}

**return** result;

}

### 18. palindromeRearranging

Cho một chuỗi, tìm hiểu xem các ký tự của nó có thể được sắp xếp lại để
tạo thành một palindrome hay không?

***Nhận xét:***

Một chuỗi là palindrome sẽ có đặc điểm:

-   TH1: Số lượng ký tự mỗi loại đều chẵn.

-   TH2: Nếu có số lượng ký tự lẻ, thì chỉ tồn tại duy nhất một loại ký
    tự đó có số lượng lẻ, và nó phân bổ ở chính giữa palindrome.

Vì vậy, ta chỉ cần đếm số loại ký tự khác nhau có số lượng lẻ.

***Thuật toán:***

\- B1: Nhập vào một chuỗi ký tự

\- B2: Tạo mảng count để lưu số lượng mỗi loại ký tự có trong chuỗi nhập
vào

\- B3: Gán odd := số lượng giá trị lẻ trong mảng count

\- B4: Nếu odd \< 2 thì trả về true và kết thúc. Ngược lại, trả về false
và kết thúc.

***Mã C++:***

bool solution(string inputString)

{

int count\[26\] = {0};

**for** (int i = 0; i \< inputString.size(); i++)

{

count\[inputString\[i\] - \'a\'\]++;

}

int odd = 0;

**for** (int i = 0; i \< 26; i++)

{

**if** (count\[i\] % 2 != 0)

{

odd++;

}

}

**return** odd \< 2;

}

## Island of Knowledge

### 19. areEquallyStrong

Gọi hai cánh tay khỏe như nhau nếu khối lượng nặng nhất mà mỗi người
nhấc được là bằng nhau.

Gọi hai người là mạnh như nhau nếu cánh tay mạnh nhất của họ mạnh như
nhau (cánh tay mạnh nhất có thể là cả bên phải và bên trái), và cánh tay
yếu nhất của họ cũng vậy.

Dựa vào khả năng nâng cánh tay của bạn và bạn của bạn, hãy tìm hiểu xem
hai bạn có khỏe như nhau không.

***Thuật toán:***

Gọi L1, R1, L2, R2 lần lượt là sức nâng của tay trái, tay phải của lần
lượt 2 người

Nếu (L1=L2 và R1 = R2) hoặc (L1=R2 và R1=L2) thì 2 người khỏe như nhau.

***Mã C++:***

bool solution(int yourLeft, int yourRight, int friendsLeft, int
friendsRight)

{

**return** (yourLeft == friendsLeft && yourRight == friendsRight) \|\|
(yourLeft == friendsRight && yourRight == friendsLeft);

}

### 20. arrayMaximalAdjacentDifference

Cho một mảng các số nguyên, hãy tìm hiệu tuyệt đối lớn nhất giữa hai
phần tử liền kề bất kỳ của nó.

***Thuật toán:***

\- B1: Nhận vào mảng các số nguyên A

\- B2: Gán result := 0

\- B3: for i = 0 to A.size()-2 then:

Gán result = max(result, abs(a\[i\]-a\[i+1\])

\- B4: Trả về result và kết thúc.

***Mã C++:***

int solution(vector\<int\> inputArray)

{

int result = 0;

**for** (int i = 0; i \< inputArray.size() - 1; i++)

{

result = max(result, abs(inputArray\[i\] - inputArray\[i + 1\]));

}

**return** result;

}

### 21. isIPv4Address

Địa chỉ IP là nhãn số được gán cho từng thiết bị (ví dụ: máy tính, máy
in) tham gia vào mạng máy tính sử dụng Giao thức Internet để liên lạc.
Có hai phiên bản của giao thức Internet và do đó có hai phiên bản địa
chỉ. Một trong số đó là địa chỉ IPv4 .

Đưa ra một chuỗi, hãy tìm hiểu xem chuỗi đó có đáp ứng các quy tắc đặt
tên địa chỉ IPv4 hay không.

***Thuật toán:***

\- B1: Nhận vào một chuỗi

\- B2: Nếu độ dài chuỗi lớn hơn 15 thì trả về false và kết thúc.

\- B3: Ngắt từng đoạn trong chuỗi nhập vào, với dấu ngăn cách là '.'

\- B4: Convert từng đoạn đó về số nguyên. Dùng biến count để đếm số các
số hợp lệ (0\<=number\<=255)

\- B5: Nếu count = 4 thì trả về true và kết thúc. Ngược lại, trả về
false và kết thúc.

***Mã C++:***

bool solution(string inputString) {

int len = inputString.length();

**if**(len\>15){

**return** false;

}

int count = 0;

int start = -1;

**for**(int i = 0; i\<=len; i++){

**if**(inputString\[i\]==\'.\' \|\| i == len){

int size = i - start - 1;

**if**(size\<1 \|\| size \> 3){

**return** false;

}

string s = inputString.substr(start+1, size);

**for**(int j = 0; j\<size; j++){

**if**(s\[j\]\<\'0\' \|\| s\[j\]\>\'9\'){

**return** false;

}

}

int number = stoi(s);

**if**(to_string(number).length()==size && number\>=0 && number \<=
255){

count++;

}

start = i;

}

}

**return** count == 4;

}

### 22. avoidObstacles

Bạn được cung cấp một dãy các số nguyên biểu thị tọa độ của các chướng
ngại vật nằm trên một đường thẳng.

Giả sử rằng bạn đang nhảy từ điểm có tọa độ 0 về phía phải. Bạn chỉ được
phép thực hiện các bước nhảy có cùng độ dài được biểu thị bằng một số
nguyên.

Tìm độ dài tối thiểu của bước nhảy đủ để tránh tất cả các chướng ngại
vật.

***Thuật toán:***

\- B1: Nhập vào dãy số

\- B2: Gán step := 2

\- B3: Duyệt toàn bộ dãy số. Nếu tồn tại một phần tử chia hết cho step
thì tăng step lên 1 đơn vị và duyệt lại từ đầu. Nếu không, thì trả về
step và kết thúc.

***Mã C++:***

int solution(vector\<int\> inputArray)

{

int step = 2;

int size = inputArray.size();

**for** (int i = 0; i \< size; i++)

{

**if** (inputArray\[i\] % step == 0)

{

step++;

i = -1;

}

}

**return** step;

}

### 23. boxBlur

Đêm qua bạn đã tiệc tùng một chút quá khó khăn. Bây giờ có một bức ảnh
đen trắng của bạn sắp lan truyền! Bạn không thể để điều này hủy hoại
danh tiếng của mình, vì vậy bạn muốn áp dụng làm mờ hộp thuật toán cho
ảnh để ẩn nội dung của nó.

Các pixel trong ảnh đầu vào được biểu diễn dưới dạng số nguyên. Thuật
toán làm biến dạng hình ảnh đầu vào theo cách sau: Mỗi pixel x trong
hình ảnh đầu ra có giá trị bằng giá trị trung bình của các giá trị pixel
từ 3 × 3 hình vuông có tâm tại x, bao gồm cả chính nó. Tất cả các pixel
trên đường viền của x sau đó được loại bỏ.

***Thuật toán:***

\- B1: Nhập vào ma trận A có kích thước row x col

\- B2: Tạo ma trận result có kích thước (row-2) x (col-2) để lưu kết quả

\- B3: Duyệt ma trận A:

for i = 0 to row-3 then:

for j = 0 to col-3 then:

Gán sum := 0;

for k = i to i+2 then:

for t = j to j+2 then:

Gán sum := sum + A\[k\]\[t\]

Gán result\[i\]\[j\] := sum div 9;

\- B4: Trả về ma trận result và kết thúc.

***Mã C++:***

vector\<vector\<int\>\> solution(vector\<vector\<int\>\> image)

{

int row = image.size();

int col = image\[0\].size();

vector\<vector\<int\>\> result(row - 2, vector\<int\>(col - 2));

**for** (int i = 0; i \< row - 2; i++)

{

**for** (int j = 0; j \< col - 2; j++)

{

int sum = 0;

**for** (int k = i; k \< i + 3; k++)

{

**for** (int t = j; t \< j + 3; t++)

{

sum += image\[k\]\[t\];

}

}

result\[i\]\[j\] = sum / 9;

}

}

**return** result;

}

### 24. minesweeper

Trong trò chơi Minesweeper nổi tiếng, bạn có một bàn cờ với một số quả
mìn và những ô không chứa quả mìn có một số trong đó cho biết tổng số
quả mìn trong các ô lân cận. Bắt đầu với một số cách sắp xếp mìn, chúng
tôi muốn tạo một thiết lập trò chơi Minesweeper .

***Thuật toán:***

\- B1: Nhận vào ma trận A có kích thước row x col

\- B2: Tạo ma trận result kích thước row x col để lưu kết quả

\- B3: Với mỗi hàng của ma trận A, thêm giá trị false vào đầu và cuối
mỗi hàng

Thêm 1 hàng toàn giá trị false vào đầu và cuỗi của ma trận A

\- B4: Duyệt ma trận A:

for i = 1 to row then:

for j = 1 to col then:

Gán sum = 0;

for k = i-1 to i+1 then:

for t = j-1 to j+1 then:

Nếu k\<\>i và t \<\> j thì:

sum := sum + A\[i\]\[j\]

Gán result\[i-1\]\[j-1\] = sum;

\- B5: Trả về ma trận result và kết thúc.

***Mã C++:***

vector\<vector\<int\>\> solution(vector\<vector\<bool\>\> matrix)

{

int row = matrix.size();

int col = matrix\[0\].size();

vector\<vector\<int\>\> result(row, vector\<int\>(col));

vector\<bool\> temp(col + 2);

**for** (int i = 0; i \< row; i++)

{

matrix\[i\].insert(matrix\[i\].begin(), false);

matrix\[i\].insert(matrix\[i\].end(), false);

}

matrix.insert(matrix.begin(), temp);

matrix.insert(matrix.end(), temp);

**for** (int i = 1; i \<= row; i++)

{

**for** (int j = 1; j \<= col; j++)

{

int count = 0;

**for** (int k = i - 1; k \<= i + 1; k++)

{

**for** (int t = j - 1; t \<= j + 1; t++)

{

**if** (k == i && t == j)

{

**continue**;

}

count += matrix\[k\]\[t\];

}

}

result\[i - 1\]\[j - 1\] = count;

}

}

**return** result;

}

## Rains of Reason

### 25. arrayReplace

Cho một mảng các số nguyên, thay thế tất cả các lần xuất hiện của
**elemToReplace** với **substitutionElem**

***Thuật toán:***

\- B1: Nhập vào mảng các số nguyên A

\- B2: Duyệt tuần tự mảng A từ phần tử đầu đến phần tử cuối. Nếu phần tử
nào có giá trị bằng elemToReplace thì gán lại giá trị phần tử đó thành
substitutionElem

\- B3: Trả lại mảng sau khi đã thay thế.

***Mã C++:***

vector\<int\> solution(vector\<int\> inputArray, int elemToReplace, int
substitutionElem)

{

vector\<int\> result;

**for** (int x : inputArray)

{

**if** (x == elemToReplace)

result.push_back(substitutionElem);

**else**

result.push_back(x);

}

**return** result;

}

### 26. evenDigitsOnly

Kiểm tra xem tất cả các chữ số của số nguyên đã cho có phải là số chẵn
không.

***Thuật toán:***

\- B1: Nhận vào số nguyên n

\- B2: Nếu n \> 0 thì:

Nếu n lẻ thì return false và kết thúc chương trình.

Ngược lại, chuyển đến B4.

\- B3: Gán n = n div 10. Quay lại B2.

\- B4: Trả về true và kết thúc chương trình.

***Mã C++:***

bool solution(int n)

{

**while** (n \> 0)

{

**if** (n % 2 != 0)

{

**return** false;

}

n /= 10;

}

**return** true;

}

### 27. variableName

Tên biến chính xác chỉ bao gồm các chữ cái tiếng Anh, chữ số và dấu gạch
dưới và chúng không thể bắt đầu bằng một chữ số.

***Thuật toán:***

\- B1: Nhận vào chuỗi S

\- B2: Nếu ký tự đầu tiên hợp lệ (chữ cái thường, chữ cái hoa, chữ số,
dấu gạch dưới) và ký tự đó là số thì trả về false và kết thúc chương
trình.

\- B3: Duyệt tuần tự chuỗi, từ ký tự đầu đến cuối, nếu gặp bất kỳ ký tự
nào không hợp lệ thì return false và kết thúc chương trình.

\- B4. Trả về true và kết thúc chương trình.

***Mã C++:***

bool validate(char c)

{

**if** (c \>= \'a\' && c \<= \'z\')

{

**return** true;

}

**if** (c \>= \'A\' && c \<= \'Z\')

{

**return** true;

}

**if** (c \>= \'0\' && c \<= \'9\')

{

**return** true;

}

**if** (c == \'\_\')

{

**return** true;

}

**return** false;

}

bool solution(string name)

{

**if** (validate(name\[0\]))

{

**if** (name\[0\] \>= \'0\' && name\[0\] \<= \'9\')

{

**return** false;

}

}

**else**

{

**return** false;

}

**for** (int i = 1; i \< name.length(); i++)

{

**if** (!validate(name\[i\]))

{

**return** false;

}

}

**return** true;

}

### 28. alphabeticShift

Đưa ra một chuỗi, nhiệm vụ của bạn là thay thế từng ký tự của nó bằng ký
tự tiếp theo trong bảng chữ cái tiếng Anh; tức là thay thế avới b, thay
thế bvới c, vân vân ( z sẽ được thay thế bởi a).

***Thuật toán:***

\- B1: Nhận vào một chuỗi S

\- B2: Duyệt tuần tự xâu S từ ký tự đầu đến ký tự cuối:

Nếu ký tự đó là z thì gán lại bằng a

Ngược lại, gán ký tự đó bằng ký tự liền sau trong bảng chữ cái

\- B3: Trả về xâu S sau khi thay thế.

***Mã C++:***

string solution(string inputString)

{

**for** (int i = 0; i \< inputString.length(); i++)

{

**if** (inputString\[i\] == \'z\')

{

inputString\[i\] = \'a\';

}

**else**

{

inputString\[i\] += 1;

}

}

**return** inputString;

}

### **29. chessBoardCellColor**

Cho hai ô trên bàn cờ tiêu chuẩn, hãy xác định xem chúng có cùng màu hay
không.

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image3.png){width="2.7583333333333333in"
height="2.825in"}

***Nhận xét:***

Gọi tọa độ mỗi ô trên bàn cờ là (x;y)

Ta thấy, các ô cùng màu trên bàn cờ có tổng tọa độ (x+y) đều hơn kém
nhau một số nguyên lần 2 đơn vị:

VD: Xét 2 ô a1 và c3.

Ta có: c + 3 = a + 1 + 4 = a + 1 + 2\*2;

=\> (a+1) + (c+3) = 2\*(a+1) + 2\*2 =\> chẵn.

Hay nói cách khác, các ô cùng màu sẽ có tổng tọa độ (x+y) cùng chẵn hoặc
cùng lẻ. Điều này dẫn tới tổng của tổng các tọa độ của các cô cùng màu
sẽ có giá trị chẵn.

Vì vậy, Gọi hai ô có tọa độ (x1, y1) và (x2, y2). Hai ô này có cùng màu
khi và chỉ khi (x1 + y1 + x2 + y2) là số chẵn.

***Thuật toán:***

\- B1: Nhận vào tọa độ 2 ô trên bàn cờ

\- B2: Tính tổng tất cả toạ độ của 2 ô. Nếu giá trị này là chẵn thì kết
luận 2 là cùng màu. Ngược là thì không.

\- B3. Kết thúc.

***Mã C++:***

bool solution(string cell1, string cell2)

{

**return** (cell1\[0\] + cell1\[1\] + cell2\[0\] + cell2\[1\]) % 2 == 0;

}

## Through the Fog

### 30. circleOfNumber

Xét các số nguyên từ 0 đến n -- 1 được viết dọc theo đường tròn sao cho
khoảng cách giữa hai số lân cận bất kỳ bằng nhau (chú ý rằng 0 và n -
1cũng là láng giềng).

Được cho n Và firstNumber, tìm số viết ở vị trí bán kính đối với
firstNumber

VD: n = 10 Và firstNumber = 2, đầu ra phải là solution(n, firstNumber) =
7

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image4.png){width="2.7333333333333334in"
height="2.783333333333333in"}

***Nhận xét:*** Với 0 \<= firstNumber \< (n/2) thì số đối diện là
firstNumber + (n/2) \< n

Với (n/2) \<= firstNumber \< n thì khi ta cộng firstNumber với (n/2), ta
thu được một số lớn hơn n một khoảng là i đơn vị. Giá trị i này chính là
số đối diện của firstNumber trên đường tròn.

Kết hợp 2TH này, ta thu được công thức tổng quát là: **(firstNumber + n
div 2) mod n**;

***Thuật toán:***

\- B1: Nhận vào giá trị n và firstNumber

\- B2: Trả về giá trị (firstNumber + n div 2) mod n và kết thúc chương
trình.

***Mã C++:***

int solution(int n, int firstNumber)

{

**return** (firstNumber + n / 2) % n;

}

### 31. depositProfit

Bạn đã gửi một số tiền cụ thể vào tài khoản ngân hàng của mình. Mỗi năm,
số dư của bạn tăng với tốc độ tăng trưởng như nhau rate. Với giả định
rằng bạn không gửi thêm bất kỳ khoản tiền nào, hãy tìm hiểu xem sẽ mất
bao lâu để số dư của bạn vượt qua một mức cụ thể threshold.

Ví dụ: Với deposit = 100, rate = 20, Và threshold = 170, đầu ra phải là
solution(deposit, rate, threshold) = 3.

Mỗi năm số tiền trong tài khoản của bạn tăng thêm 20%. Vì vậy, trong
suốt nhiều năm, số dư của bạn sẽ là:

-   năm 0: 100;

-   năm 1: 120;

-   năm 2: 144;

-   năm 3: 172.8.

Như vậy, sẽ mất 3 năm để số dư của bạn vượt qua threshold, vì vậy câu
trả lời là 3.

***Thuật toán:***

\- B1: Nhận vào deposit, rate, threshold

\- B2: Gán year := 0, balance := deposit;

\- B3: Nếu balance \< threshold thì:

Gán year := year + 1;

Gán balance := balance \* (1+rate/100);

Quay lại B3;

Nếu không, trả về giá trị year.

\- B4: Kết thúc chương trình.

***Mã C++:***

int solution(int deposit, int rate, int threshold)

{

int years = 0;

double balance = deposit;

**while** (balance \< threshold)

{

balance += balance \* rate / 100.0;

years++;

}

**return** years;

}

### 32. absoluteValuesSumMinimization

Cho một mảng các số nguyên đã được sắp xếp a, nhiệm vụ của bạn là xác
định phần tử nào của agần nhất với tất cả các giá trị khác của a. Nói
cách khác, tìm phần tử x TRONG a, giúp giảm thiểu tổng sau:

S = abs(a\[0\] - x) + abs(a\[1\] - x) + \... + abs(a\[a.length - 1\] -
x)

(Ở đây abs biểu thị giá trị tuyệt đối)

Nếu có nhiều câu trả lời, hãy xuất câu trả lời nhỏ nhất .

***Ví dụ:***

Với a = \[2, 4, 7\], đầu ra phải là solution(a) = 4.

-   vì x = 2, giá trị sẽ là abs(2 - 2) + abs(4 - 2) + abs(7 - 2) = 7.

-   vì x = 4, giá trị sẽ là abs(2 - 4) + abs(4 - 4) + abs(7 - 4) = 5.

-   vì x = 7, giá trị sẽ là abs(2 - 7) + abs(4 - 7) + abs(7 - 7) = 8.

Giá trị nhỏ nhất có thể là khi x = 4, vì vậy câu trả lời là 4.

Với a = \[2, 3\], đầu ra phải là solution(a) = 2.

-   vì x = 2, giá trị sẽ là abs(2 - 2) + abs(3 - 2) = 1.

-   vì x = 3, giá trị sẽ là abs(2 - 3) + abs(3 - 3) = 1.

Bởi vì có một sự ràng buộc, nhỏ nhất x giữa x = 2 Và x = 3 là câu trả
lời.

***Nhật xét:***

Chọn x = a\[i\] là một giá trị bất kỳ trong tập {a\[0\], a\[1\],
a\[2\],..., a\[n-1\]}.

Lúc này, ta có:

S = (x -- a\[0\]) + (x -- a\[1\]) + ... + (x -- a\[i-1\]) + 0 +
(a\[i+1\] -- x) + (a\[i+2\] -- x) + ... + (a\[n-2\] -- x) + (a\[n-1\] --
x).

= ix -- (a\[0\] + a\[1\] + ... + a\[i-1\]) - (n-i-1)x + (a\[i+1\] +
a\[i+2\] + ... + a\[n-2\] + a\[n-1\])

= (2i - n + 1) x + (a\[n-1\] + a\[n-2\] + ... + a\[i+1\]) -- (a\[i-1\] +
a\[i-2\] + ... + a\[0\])

***Xét 3TH:***

-   TH1: i = (n-1)/2

    -   S1 = (a\[n-1\] + a\[n-2\] + ... + a\[(n-1)/2 + 1\] + 0 --
        (a\[(n-1)/2 -1\] + a\[(n-1)/2 -- 2\] + ... + a\[0\])

-   TH2: i \> (n-1)/2

    -   S2 = (a\[n-1\] + a\[n-2\] + ... + a\[i+1\]) + 0 -- (a\[i-1\]
        a\[i-2\] + ... + a\[(n-1)/2\] + ... + a\[0\]) + 2\*(i --
        (n-1)/2)\*a\[i\]

    -   Trong đó, (i -- (n-1)/2) là số phần tử từ vị trí (n-1)/2 đến vị
        trí (i-1). Mà a\[i\] lớn hơn các phần tử từ a\[i-1\] đến
        a\[(n-1)/2\] nên suy ra: S2 \> S1

-   TH3: i \< (n-1)/2

    -   S3 = (a\[n-1\] + a\[n-2\] + ... + a\[(n-1)/2\] + ... +
        a\[i+1\]) + 0 -- (a\[i-1\] a\[i-2\] + ... + a\[0\]) + 2\*(i --
        (n-1)/2)\*a\[i\]

    -   Dễ thấy, S3 \> S1

Từ 3TH trên, ta kết luận: chọn x = a\[(n-1)/2\] thì sẽ thỏa mãn yêu cầu
của đề bài làm cho S có giá trị nhỏ nhất.

***Thuật toán:***

\- B1: Nhận vào dãy số S gồm n phần tử đã được sắp xếp theo thứ tự tăng
dần

\- B2: Trả về giá trị phần tử ở chính giữa dãy S là S\[(n-1) div 2\]

\- B3: Kết thúc chương trình.

***Mã C++:***

int solution(vector\<int\> a)

{

**return** a\[(a.size() - 1) / 2\];

}

### 33. stringsRearrangement

Cho một mảng các chuỗi có độ dài bằng nhau, bạn muốn biết liệu có thể
sắp xếp lại thứ tự của các phần tử sao cho mỗi cặp chuỗi liên tiếp khác
nhau đúng một ký tự hay không. Trở lại true nếu có thể, và false nếu
không.

Lưu ý: Bạn chỉ đang sắp xếp lại thứ tự của các chuỗi chứ không phải thứ
tự của các chữ cái trong chuỗi!

***Ví dụ:***

Với inputArray = \[\"aba\", \"bbb\", \"bab\"\], đầu ra phải là
**solution(inputArray) = false.**

Có 6 cách sắp xếp khả dĩ cho các chuỗi này:

\[\"aba\", \"bbb\", \"bab\"\]

\[\"aba\", \"bab\", \"bbb\"\]

\[\"bbb\", \"aba\", \"bab\"\]

\[\"bbb\", \"bab\", \"aba\"\]

\[\"bab\", \"bbb\", \"aba\"\]

\[\"bab\", \"aba\", \"bbb\"\]

Không cái nào trong số này thỏa mãn điều kiện của các chuỗi liên tiếp
khác nhau 1 ký tự, vì vậy câu trả lời là false.

Với inputArray = \[\"ab\", \"bb\", \"aa\"\], đầu ra phải là
**solution(inputArray) = true.**

Có thể sắp xếp các chuỗi này sao cho mỗi cặp chuỗi liên tiếp khác nhau 1
ký tự (ví dụ: \"aa\", \"ab\", \"bb\"hoặc \"bb\", \"ab\", \"aa\"), vì vậy
hãy trả về true.

***Thuật toán:***

\- B1: Liệt kê tất cả cá hoán vị của mảng các chuỗi

\- B2: Nếu tồn tại một hoán vị thỏa mãn yêu cầu đề bài (mỗi cặp chuỗi
liền kề khác nhau đúng một ký tự) thì trả về True. Ngược lại, trả về
False

\- B3: Kết thúc chương trình.

***Mã C++:***

bool isDiffByOneChar(string s1, string s2)

{

int count = 0;

**for** (int i = 0; i \< s1.size(); i++)

{

**if** (s1\[i\] != s2\[i\])

count++;

**if** (count \> 1)

**return** false;

}

**return** (count == 1);

}

void Try(vector\<string\> &inputArray, vector\<bool\> &used,
vector\<string\> &result, bool &found)

{

**if** (found)

**return**;

**if** (result.size() == inputArray.size())

{

**for** (int i = 0; i \< result.size() - 1; i++)

{

**if** (!isDiffByOneChar(result\[i\], result\[i + 1\]))

**return**;

}

found = true;

}

**else**

{

**for** (int i = 0; i \< inputArray.size(); i++)

{

**if** (!used\[i\])

{

used\[i\] = true;

result.push_back(inputArray\[i\]);

Try(inputArray, used, result, found);

used\[i\] = false;

result.pop_back();

}

}

}

}

bool solution(vector\<string\> inputArray)

{

vector\<bool\> used(inputArray.size(), false);

vector\<string\> result;

bool found = false;

Try(inputArray, used, result, found);

**return** found;

}

## Diving Deeper

### 34. extractEachKth

Đã cho mảng các số nguyên, loại bỏ từng phần tử thứ k từ nó.

***Ví dụ***

Với inputArray = \[1, 2, 3, 4, 5, 6, 7, 8, 9, 10\] Và k = 3, đầu ra phải
là **solution(inputArray, k) = \[1, 2, 4, 5, 7, 8, 10\].**

***Thuật toán:***

\- B1: Nhận vào mảng số nguyên A

\- B2: Tạo một mảng result

\- B3: Duyệt tuần tự mảng A.

Nếu thứ tự của phần tử đó là không là bội của k thì thêm phần tử đó vào
mảng result

\- B4: Trả về mảng result và kết thúc chương trình.

***Mã C++:***

vector\<int\> solution(vector\<int\> inputArray, int k)

{

vector\<int\> result;

**for** (int i = 0; i \< inputArray.size(); i++)

{

**if** ((i + 1) % k)

{

result.push_back(inputArray\[i\]);

}

}

**return** result;

}

### 35. firstDigit

Tìm chữ số ngoài cùng bên trái xuất hiện trong một chuỗi đã cho.

***Ví dụ***

Với inputString = \"var_1\_\_Int\", đầu ra phải là
**solution(inputString) = \'1\'**;

Với inputString = \"q2q-q\", đầu ra phải là **solution(inputString) =
\'2\'**;

Với inputString = \"0ss\", đầu ra phải là **solution(inputString) =
\'0\'**.

***Thuật toán:***

\- B1: Nhận vào một chuỗi ký tự S

\- B2: Duyệt tuần tự từng ký tự trong xâu S từ trái sang phải.

Nếu gặp phải ký tự số thì trả về ký tự đó và kết thúc chương trình.

***Mã C++:***

char solution(string inputString)

{

char result = 0;

**for** (int i = 0; i \< inputString.length(); i++)

{

**if** (inputString\[i\] \>= \'0\' && inputString\[i\] \<= \'9\')

{

result = inputString\[i\];

**break**;

}

}

**return** result;

}

### 36. differentSymbolsNaive

Cho một chuỗi, tìm số ký tự khác nhau trong đó.

***Ví dụ***

Với s = \"cabca\", đầu ra phải là **solution(s) = 3.**

Có 3 ký tự khác nhau a, b Và c.

***Thuật toán:***

\- B1: Nhận vào xâu ký tự S.

\- B2: Tạo mảng số nguyên Count gồm 26 phần tử để lưu số lượng của mỗi
loại ký tự có trong xâu S.

\- B3: Duyệt tuần tự từng ký tự trong xâu S từ trái sang phải, tăng số
lượng tương ứng của ký tự đó trong mảng Coung.

\- B4: Đếm số lượng phần tử khác 0 trong mảng Count và trả về giá trị
đó.

\- B5: Kết thúc chương trình.

***Mã C++:***

int solution(string inputString)

{

int count\[26\] = {0};

**for** (int i = 0; i \< inputString.length(); i++)

{

count\[inputString\[i\] - \'a\'\]++;

}

int result = 0;

**for** (int i = 0; i \< 26; i++)

{

**if** (count\[i\] \> 0)

{

result++;

}

}

**return** result;

}

### 37. arrayMaxConsecutiveSum

Cho mảng các số nguyên, tìm tổng lớn nhất có thể có của một số kcác phần
tử liên tiếp.

***Ví dụ***

Với inputArray = \[2, 3, 5, 1, 6\] Và k = 2, đầu ra phải là
**solution(inputArray, k) = 8**.

Tất cả các tổng có thể có của 2các phần tử liên tiếp là:

-   2 + 3 = 5;

-   3 + 5 = 8;

-   5 + 1 = 6;

-   1 + 6 = 7.

Như vậy, câu trả lời là 8.

***Thuật toán:***

\- B1: Nhận vào mảng các số nguyên A và số nguyên k

\- B2: Gán sum = tổng của k phần tử đầu tiên trong mảng A.

\- B3: Gán result = sum;

\- B4: For i := k to A.size()-1 then:

Gán sum := sum + A\[k\] -- A\[i-k\];

Gán result := max(result, sum);

\- B5: Trả về result và kết thúc chương trình.

***Mã C++:***

int solution(vector\<int\> inputArray, int k)

{

int result = 0;

int sum = 0;

**for** (int i = 0; i \< k; i++)

{

sum += inputArray\[i\];

}

result = sum;

**for** (int i = k; i \< inputArray.size(); i++)

{

sum += inputArray\[i\] - inputArray\[i - k\];

result = max(result, sum);

}

**return** result;

}

## Dark Wilderness

### 38. growingPlant

Chăm sóc cây có thể là công việc khó khăn, nhưng vì bạn chăm sóc nó
thường xuyên nên cây của bạn sẽ phát triển ổn định. Mỗi ngày, chiều cao
của nó tăng lên một lượng cố định được biểu thị bằng số nguyên upSpeed.
Nhưng do thiếu ánh sáng mặt trời, cây giảm chiều cao mỗi đêm, một lượng
được biểu thị bằng downSpeed.

Vì bạn đã trồng cây từ hạt nên nó bắt đầu cao 0ban đầu. Cho một số
nguyên desiredHeight, nhiệm vụ của bạn là tìm xem cần bao nhiêu ngày để
cây đạt được chiều cao này.

***Ví dụ***

Với upSpeed = 100, downSpeed = 10, Và desiredHeight = 910, đầu ra phải
là **solution(upSpeed, downSpeed, desiredHeight) = 10.**

\# Ngày Đêm

1 100 90

2 190 180

3 280 270

4 370 360

5 460 450

6 550 540

7 640 630

8 730 720

9 820 810

10 910 900

Cây đầu tiên đạt đến chiều cao của 910 vào ngày 10.

***Nhận xét:***

Ta thấy, khi upSpeed \>= desiredHeight thì thời gian cần để đạt được
chiều cao này là 1 ngày.

Khi desiredHeight \> upSpeed thì số ngày cần để đạt được chiều cao này
sẽ tuân theo công thức: n \* upSpeed -- (n-1) \* downSpeed \>=
desiredHeight. Trong đó, n là số nguyên nhỏ nhất \> 1 thỏa mãn công
thức.

Từ đây, n \>= (desiredHeight - downSpeed)/(upSpeed -- downSpeed).

***Thuật toán:***

\- B1: Nhận vào các số nguyên upSpeed, downSpeed và desiredHeight.

\- B2: Nếu upSpeed lớn hơn hoặc bằng desiredHeight, thì trả về 1 và kết
thúc chương trình.

Ngược lại, trả về số nguyên nhỏ nhất lớn hơn **(desiredHeight -
downSpeed) / (upSpeed - downSpeed)**.

***Mã C++:***

int solution(int upSpeed, int downSpeed, int desiredHeight)

{

**if** (upSpeed \>= desiredHeight)

{

**return** 1;

}

**return** ceil((desiredHeight - downSpeed) \* 1.0 / (upSpeed -
downSpeed));

}

### 39. knapsackLight

Bạn đã tìm thấy hai vật phẩm trong rương kho báu! Vật đầu tiên nặng
weight1và có giá trị value1, và vật thứ hai nặng weight2và có giá trị
value2. Tổng giá trị tối đa của các mặt hàng bạn có thể mang theo bên
mình là bao nhiêu, giả sử rằng khả năng chịu trọng lượng tối đa của bạn
là maxWvà bạn không thể quay lại lấy đồ sau này?

Lưu ý mỗi loại chỉ có 2 món đồ và mỗi loại không được mang nhiều hơn 1
món, tức là không được mang 2 món đồ thứ nhất và 2 món đồ thứ hai.

***Ví dụ***

-   Với value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, Và maxW = 8,
    đầu ra phải là **solution(value1, weight1, value2, weight2, maxW) =
    10.** Bạn chỉ có thể mang vật phẩm đầu tiên.

-   Với value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, Và maxW = 9,
    đầu ra phải là **solution(value1, weight1, value2, weight2, maxW) =
    16.** Bạn đủ khỏe để mang theo cả hai món đồ bên mình.

-   Với value1 = 5, weight1 = 3, value2 = 7, weight2 = 4, Và maxW = 6,
    đầu ra phải là ***solution(value1, weight1, value2, weight2, maxW) =
    7***. Bạn không thể lấy cả hai vật phẩm, nhưng bạn có thể lấy bất kỳ
    vật phẩm nào trong số chúng.

***Thuật toán:***

\- B1: Nhận vào các giá trị v1, w1, v2, w2, maxW;

\- B2: Nếu maxW nhỏ hơn cả w1 và w2 thì trả về 0 và kết thúc chương
trình.

\- B3: Nếu w1 \<= maxW \< w2, thì trả về v1 và kết thúc chương trình.

\- B4: Nếu w2 \<= maxW \< w1, thì trả về v2 và kết thúc chương trình.

\- B5: Nếu w1 \<= w2 \< maxW \< w1 + w2 thì trả về max(v1,v2) và kết
thúc chương trình.

\- B6: Nếu w1 + w2 \<= maxW thì trả về v1 + v2 và kết thúc chương trình.

***Mã C++:***

int solution(int value1, int weight1, int value2, int weight2, int maxW)

{

**if** (maxW \< weight1 && maxW \< weight2)

{

**return** 0;

}

**if** (maxW \>= weight1 && maxW \< weight2)

{

**return** value1;

}

**if** (maxW \>= weight2 && maxW \< weight1)

{

**return** value2;

}

**if** (maxW \>= weight1 && maxW \>= weight2 && maxW \< (weight1 +
weight2))

{

**return** max(value1, value2);

}

**return** value1 + value2;

}

### 40. longestDigitsPrefix

Đưa ra một chuỗi, xuất tiền tố dài nhất chỉ chứa các chữ số.

***Ví dụ***

Với inputString = \"123aa1\", đầu ra phải là ***solution(inputString) =
\"123\"***.

***Thuật toán:***

\- B1: Nhận vào xâu ký tự S.

\- B2: Tạo xâu result để lưu kết quả.

\- B3: Duyệt tuần tự các ký tự trong xâu S từ trái sang phải:

Nếu gặp ký tự số thì thêm vào xâu result và kiểm tra ký tự tiếp theo.

Ngược lại, Trả về xâu result và kết thúc chương trình

***Mã C++:***

string solution(string inputString)

{

string result;

**for** (int i = 0; i \< inputString.length(); i++)

{

**if** (isdigit(inputString\[i\]))

{

result += inputString\[i\];

**continue**;

}

**break**;

}

**return** result;

}

### 41. digitDegree

Hãy định nghĩa bậc chữ số của một số nguyên dương là số lần chúng ta cần
thay số này bằng tổng các chữ số của nó cho đến khi chúng ta nhận được
một số có một chữ số.

Cho một số nguyên, tìm bậc chữ số của nó.

***Ví dụ***

-   Với n = 5, đầu ra phải là **solution(n) = 0;**

-   Với n = 100, đầu ra phải là **solution(n) = 1.**

    -   1 + 0 + 0 = 1.

-   Với n = 91, đầu ra phải là **solution(n) = 2**.

    -   9 + 1 = 10 → 1 + 0 = 1.

***Thuật toán:***

\- B1: Nhận vào số nguyên n

\- B2: Gán count := 0;

\- B3: Tính tổng các chữ số của n và gán vào biến sum;

\- B4: Nếu sum không phải 1 chữ số thì tăng biến count, gán n = sum và
quay lại B3.

Ngược lại, trả về count và kết thúc chương trình.

***Mã C++:***

**Sử dụng đệ quy:**

int solution(int n)

{

**if** (n \>= 0 && n \<= 9)

{

**return** 0;

}

int sum = 0;

**while** (n \> 0)

{

sum += n % 10;

n /= 10;

}

**return** 1 + solution(sum);

}

**Không sử dụng đệ quy:**

int solution(int n)

{

int sum = n;

int count = 0;

**while** (sum \< 0 \|\| sum \> 9)

{

int temp = sum;

sum = 0;

**while** (temp \> 0)

{

sum += temp % 10;

temp /= 10;

}

count++;

}

**return** count;

}

### 42. bishopAndPawn

Với vị trí của một màu trắng bishopvà một màu đen pawn trên bàn cờ tiêu
chuẩn, hãy xác định xem quân tượng có thể bắt quân tốt trong một nước đi
hay không.

Tượng không bị hạn chế về khoảng cách cho mỗi lần di chuyển, nhưng bị
giới hạn trong việc di chuyển theo đường chéo. Kiểm tra ví dụ dưới đây
để xem làm thế nào nó có thể di chuyển:

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image5.png){width="3.0180555555555557in"
height="2.9652777777777777in"}

***Ví dụ***

-   Với bishop = \"a1\"Và pawn = \"c3\", đầu ra phải là
    **solution(bishop, pawn) = true**.

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image6.png){width="2.9756944444444446in"
height="2.9756944444444446in"}

-   Với bishop = \"h1\"Và pawn = \"h3\", đầu ra phải là
    **solution(bishop, pawn) = false**

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image7.png){width="2.8715277777777777in"
height="2.8715277777777777in"}

***Nhận xét:***

Gọi bishop\[x1,y1\], pawn\[x2, y2\]. Bishop và pawn nằm trên cùng một
đường chéo khi và chỉ khi \| x1 -- x2 \| = \| y1 -- y2 \|

***Thuật toán:***

\- B1: Nhận vào tọa độ của bishop là x1, y1. tọa độ của pawn là x2, y2;

\- B2: Nếu abs(x1 -- x2) = abs(y1 -- y2) thì trả về true và kết thúc
chương trình.

Ngược lại, trả về false và kết thúc chương trình.

***Mã C++:***

bool solution(string bishop, string pawn)

{

**return** abs(bishop\[0\] - pawn\[0\]) == abs(bishop\[1\] - pawn\[1\]);

}

## Eruption of Light

### 43. isBeautifulString

Một xâu được cho là đẹp nếu mỗi chữ cái trong xâu xuất hiện nhiều nhất
bằng số lần chữ cái trước đó trong bảng chữ cái trong xâu ; cụ thể b
xuất hiện không nhiều lần hơn a; c xuất hiện không nhiều lần hơn b; v.v.
Lưu ý bức thư đó không có chữ cái nào trước a

Đưa ra một chuỗi, kiểm tra xem nó có đẹp không .

***Ví dụ***

-   Với inputString = \"bbbaacdafe\", đầu ra phải là
    solution(inputString) = true.

    -   Chuỗi này chứa 3a, 3b, 1c, 1d, 1e, và 1f, do đó, vì không có chữ
        cái nào xuất hiện nhiều hơn chữ cái trước nên chuỗi này được coi
        là đẹp.

-   Với inputString = \"aabbb\", đầu ra phải là solution(inputString) =
    false.

    -   Vì có b xuất hiện nhiều lần hơn a chuỗi này không đẹp.

-   Với inputString = \"bbc\", đầu ra phải là solution(inputString) =
    false.

    -   Mặc dù có nhiều b hơn c, chuỗi này không đẹp vì không có a, vì
        vậy có nhiều b hơn a.

***Thuật toán:***

\- B1: Nhận vào xâu ký tự S

\- B2: Đếm số lượng từng loại ký tự có trong xâu S và lưu vào mảng
count\[26\]

\- B3: Duyệt mảng count, Nếu tồn tại count\[i\] và count\[i+1\] sao cho
count\[i\] \> count\[i+1\] thì trả về false và kết thúc chương trình.

Ngược lại, nếu không tồn tại thì trả về true và kết thúc chương trình.

***Mã C++:***

bool solution(string inputString)

{

int count\[26\] = {0};

**for** (int i = 0; i \< inputString.length(); i++)

{

count\[inputString\[i\] - \'a\'\]++;

}

**for** (int i = 1; i \< 26; i++)

{

**if** (count\[i\] \> count\[i - 1\])

{

**return** false;

}

}

**return** true;

}

### 44. findEmailDomain

Một địa chỉ email chẳng hạn như \"John.Smith@example.com\"được tạo thành
từ một phần địa phương ( \"John.Smith\"), MỘT \"@\"biểu tượng, sau đó là
một phần miền ( \"example.com\").

Phần tên miền của một địa chỉ email chỉ có thể bao gồm các chữ cái, chữ
số, dấu gạch ngang và dấu chấm. Tuy nhiên, phần cục bộ cũng cho phép
nhiều ký tự đặc biệt khác nhau. Tại đây bạn có thể xem một số ví dụ về
địa chỉ email đúng và sai.

Cho một địa chỉ email hợp lệ, tìm phần tên miền của nó.

***Ví dụ***

-   Với address = \"prettyandsimple@example.com\", đầu ra phải là
    solution(address) = \"example.com\";

-   Với address = \"fully-qualified-domain@codesignal.com\", đầu ra phải
    là solution(address) = \"codesignal.com\".

***Thuật toán:***

\- B1: Nhận vào xâu ký tự S

\- B2: Tìm vị trí của ký tự '@' cuối cùng trong xâu S

\- B3: Trả về chuỗi ký tự tính từ sau ký tự '@' đến hết xâu S

***Mã C++:***

string solution(string address)

{

**return** address.substr(address.find_last_of(\'@\') + 1);

}

### 45. buildPalindrome

Đưa ra một chuỗi, tìm chuỗi ngắn nhất có thể đạt được bằng cách thêm các
ký tự vào cuối chuỗi ban đầu để biến nó thành một chuỗi đối xứng .

***Ví dụ***

Với st = \"abcdc\", đầu ra phải là solution(st) = \"abcdcba\"

***Thuật toán:***

\- B1: Nhận vào chuỗi ký tự S;

\- B2: Gán i := 0, T := reverse(S);

\- B3: Nếu T = S thì trả về S và kết thúc chương trình;

Ngược lại, thì:

Chèn thêm ký tự S\[i\] vào vị trí (end-i) của xâu S

Gán T = reverse(S);

i := i+1;

Quay lại B3.

***Mã C++:***

string solution(string st)

{

string rev = st;

reverse(rev.begin(), rev.end());

int i = 0;

**while** (rev != st)

{

st.insert(st.end() - i, st\[i\]);

i++;

rev = st;

reverse(rev.begin(), rev.end());

}

**return** st;

}

### 46. electionsWinners

Các cuộc bầu cử đang diễn ra!

Đưa ra một mảng số phiếu bầu cho mỗi ứng cử viên cho đến nay và một số
nguyên kbằng số cử tri chưa bỏ phiếu, tìm số ứng cử viên còn cơ hội
trúng cử.

Người chiến thắng trong cuộc bầu cử phải giành được nhiều phiếu bầu hơn
bất kỳ ứng cử viên nào khác. Nếu hai hoặc nhiều ứng cử viên nhận được số
phiếu bầu (tối đa) như nhau, thì giả sử không có người chiến thắng nào
cả.

***Ví dụ***

Với votes = \[2, 3, 5, 2\] Và k = 3, đầu ra phải là solution(votes, k) =
2.

Ứng cử viên đầu tiên nhận được 2 phiếu bầu. Ngay cả khi tất cả những thứ
còn lại 3 các ứng cử viên bỏ phiếu cho anh ta, anh ta sẽ vẫn chỉ có 5
phiếu bầu, tức là bằng số với ứng cử viên thứ ba, nên sẽ không có người
chiến thắng.

Ứng cử viên thứ hai có thể giành chiến thắng nếu tất cả các ứng cử viên
còn lại bỏ phiếu cho anh ta ( 3 + 3 = 6 \> 5).

Ứng cử viên thứ ba có thể giành chiến thắng ngay cả khi không có ứng cử
viên nào còn lại bỏ phiếu cho anh ta. Ví dụ, nếu mỗi cử tri còn lại bỏ
phiếu cho từng đối thủ của mình, thì người đó vẫn là người chiến thắng
(các votes do đó mảng sẽ là \[3, 4, 5, 3\]).

Ứng cử viên cuối cùng không thể giành chiến thắng cho dù thế nào đi
chăng nữa (vì lý do tương tự như ứng cử viên đầu tiên).

Như vậy, chỉ 2 ứng cử viên có thể giành chiến thắng (thứ hai và thứ ba),
đó là câu trả lời.

***Nhận xét:***

-   Khi k = 0:

    -   Có nhiều người (\>1) có cùng số phiếu bầu lớn nhất → Không có ai
        chiến thắng (return 0)

    -   Có duy nhất một người có số phiếu lớn nhất → Người đó chiến
        thắng (return 1)

-   Khi k \> 0:

    -   Ta giả sử toàn bộ k phiếu đó bầu lần lượt cho từng người. Nếu số
        phiếu của một người cộng thêm k mà lớn hơn max hiện tại, thi
        người đó chiến thắng. Vì vậy chỉ cần đếm số người có số phiếu +
        k \> max.

***Thuật toán:***

\- B1: Nhận vào mảng các số nguyên A

\- B2: Tìm max trong A và gán vào maxValue;

\- B3: Đếm số lượng giá trị maxValue và gán giá trị đó vào biến
countMax;

\- B3: Nếu k = 0:

Nếu countMax \> 1 thì trả về 0 và kết thúc chương trình.

Ngược lại, trả về 1 và kết thúc chương trình.

Ngược lại, trả về số giá trị nguyên trong mảng A thỏa mãn A\[i\] + k \>
maxValue.

\- B4: Kết thúc chương trình.

***Mã C++:***

int solution(vector\<int\> votes, int k)

{

int maxValue = \*max_element(votes.begin(), votes.end());

int countMax = count(votes.begin(), votes.end(), maxValue);

**if** (k == 0)

{

**if** (countMax == 1)

{

**return** 1;

}

**else**

{

**return** 0;

}

}

int count = 0;

**for** (int i = 0; i \< votes.size(); i++)

{

**if** (votes\[i\] + k \> maxValue)

{

count++;

}

}

**return** count;

}

### 47. isMAC48Address

Địa chỉ kiểm soát truy cập phương tiện (địa chỉ MAC) là một mã định danh
duy nhất được gán cho các giao diện mạng để liên lạc trên phân đoạn mạng
vật lý.

Định dạng tiêu chuẩn (IEEE 802) để in địa chỉ MAC-48 ở dạng thân thiện
với con người là sáu nhóm gồm hai chữ số thập lục phân ( 0 ĐẾN 9hoặc A
ĐẾN F), được phân tách bằng dấu gạch nối (ví dụ: 01-23-45-67-89-AB).

Nhiệm vụ của bạn là kiểm tra theo chuỗi đã cho inputString nó có tương
ứng với địa chỉ MAC-48 hay không.

***Ví dụ***

-   Với inputString = \"00-1B-63-84-45-E6\", đầu ra phải là
    solution(inputString) = true;

-   Với inputString = \"Z1-1B-63-84-45-E6\", đầu ra phải là
    solution(inputString) = false;

-   Với inputString = \"not a MAC-48 address\", đầu ra phải là
    solution(inputString) = false

***Thuật toán:***

\- B1: Nhận vào xâu ký tự S

\- B2: Nếu độ dài xâu S mà khác 17 thì trả về false và kết thúc chương
trình.

\- B3: Nếu tất cả các ký tự ở vị trí {2,5,8,11,14} là ký tự '-' và các
ký tự ở vị trí còn lại chữ số từ 0 đến 9 hoặc là chữ cái in hoa từ A đến
Z thì trả về true và kết thúc chương trình.

Ngược lại, trả về false và kết thúc chương trình.

***Mã C++:***

bool solution(string inputString)

{

int len = inputString.length();

**if** (len != 17)

{

**return** false;

}

**for** (int i = 0; i \< len; i++)

{

**if** (i % 3 == 2)

{

**if** (inputString\[i\] != \'-\')

{

**return** false;

}

}

**else**

{

**if** (inputString\[i\] \< \'0\' \|\| inputString\[i\] \> \'9\')

{

**if** (inputString\[i\] \< \'A\' \|\| inputString\[i\] \> \'F\')

{

**return** false;

}

}

}

}

**return** true;

}

## Rainbow of Clarity

### 48. isDigit

Xác định xem ký tự đã cho có phải là một chữ số hay không.

***Ví dụ***

-   Với symbol = \'0\', đầu ra phải là solution(symbol) = true;

-   Với symbol = \'-\', đầu ra phải là solution(symbol) = false.

***Nhận xét:***

Một ký tự là một chữ số nếu mã ascii của ký tự đó lớn hơn hoặc bằng mã
ascci của ký tự '0' và nhỏ hơn hoặc bằng mã ascii của ký tự '9'

***Thuật toán:***

\- B1: Nhận vào ký tự c

\- B2: Nếu c \>= '0' và c \<= '9' thì trả về true.

Ngược lại, trả về false

\- B3: Kết thúc chương trình.

***Mã C++:***

bool solution(char symbol)

{

**return** (symbol \>= \'0\' && symbol \<= \'9\');

}

### 49. lineEncoding

Đưa ra một chuỗi, trả về mã hóa của nó được định nghĩa như sau:

Đầu tiên, chuỗi được chia thành số lượng ít nhất có thể các chuỗi con
rời rạc bao gồm các ký tự giống hệt nhau

***Ví dụ,*** \"aabbbc\"được chia thành \[\"aa\", \"bbb\", \"c\"\]

Tiếp theo, mỗi chuỗi con có độ dài lớn hơn một được thay thế bằng một
phép nối độ dài của nó và ký tự lặp lại

***Ví dụ***, chuỗi con \"bbb\"được thay thế bởi \"3b\"

Cuối cùng, tất cả các chuỗi mới được nối với nhau theo cùng một thứ tự
và một chuỗi mới được trả về.

***Ví dụ***

Với s = \"aabbbc\", đầu ra phải là **solution(s) = \"2a3bc\".**

***Thuật toán:***

\- B1: Nhận vào xâu S

\- B2: Tạo biến result để lưu kết quả và gán count = 1;

\- B3: Duyệt tuần tự các ký tự trong xâu S:

Nếu gặp S\[i\] != s\[i-1\] thì:

Nếu count khác 1 thì gán result = result + ToString(count);

Gán result = result + s\[i-1\]

\- B4: Trả về xâu result và kết thúc chương trình.

***Mã C++:***

string solution(string s)

{

string result = \"\";

int count = 1;

**for** (int i = 1; i \<= s.length(); i++)

{

**if** (s\[i\] != s\[i - 1\])

{

**if** (count \> 1)

{

result += to_string(count);

}

result += s\[i - 1\];

count = 1;

**continue**;

}

count++;

}

**return** result;

}

### 50. chessKnight

Cho một quân mã trên bàn cờ tiêu chuẩn, hãy tìm số nước đi khác nhau mà
quân mã đó có thể thực hiện.

Mã có thể di chuyển đến một hình vuông cách nó hai ô theo chiều ngang và
một ô theo chiều dọc hoặc hai ô theo chiều dọc và một ô theo chiều
ngang. Do đó, nước đi hoàn chỉnh trông giống như chữ L. Hãy xem hình ảnh
bên dưới để xem tất cả các nước đi hợp lệ cho một quân mã được đặt trên
một trong các ô trung tâm.

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image8.png){width="3.3333333333333335in"
height="3.308333333333333in"}

***Ví dụ***

Với cell = \"a1\", đầu ra phải là **solution(cell) = 2.**

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image9.png){width="3.3333333333333335in"
height="3.316666666666667in"}

Với cell = \"c2\", đầu ra phải là **solution(cell) = 6**.

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image10.png){width="3.3333333333333335in"
height="3.308333333333333in"}

***Nhận xét:***

Ta có ma trận thể hiện số nước đi hợp lệ của quân mã tương ứng với vị
trí của nó trên bàn cờ là:

{{2, 3, 4, 4, 4, 4, 3, 2},

{3, 4, 6, 6, 6, 6, 4, 3},

{4, 6, 8, 8, 8, 8, 6, 4},

{4, 6, 8, 8, 8, 8, 6, 4},

{4, 6, 8, 8, 8, 8, 6, 4},

{4, 6, 8, 8, 8, 8, 6, 4},

{3, 4, 6, 6, 6, 6, 4, 3},

{2, 3, 4, 4, 4, 4, 3, 2}};

***Thuật toán:***

\- B1: Nhận vào xâu S chứa vị trí của quân mã

\- B2: Trả về giá trị tương ứng với vị trí của quân mã trong ma trận
trên.

***Mã C++:***

int solution(string cell)

{

int result\[8\]\[8\] = {{2, 3, 4, 4, 4, 4, 3, 2},

{3, 4, 6, 6, 6, 6, 4, 3},

{4, 6, 8, 8, 8, 8, 6, 4},

{4, 6, 8, 8, 8, 8, 6, 4},

{4, 6, 8, 8, 8, 8, 6, 4},

{4, 6, 8, 8, 8, 8, 6, 4},

{3, 4, 6, 6, 6, 6, 4, 3},

{2, 3, 4, 4, 4, 4, 3, 2}};

**return** result\[cell\[0\] - \'a\'\]\[cell\[1\] - \'0\' - 1\];

}

### 51. deleteDigit

Cho một số nguyên, tìm số lớn nhất bạn có thể nhận được bằng cách xóa
chính xác một chữ số của số đã cho.

Ví dụ

-   Với n = 152, đầu ra phải là solution(n) = 52;

-   Với n = 1001, đầu ra phải là solution(n) = 101.

***Thuật toán:***

\- B1: Nhận vào số nguyên n

\- B2: Gán max := 0, i := 0;

\- B3: Chuyển số nguyên n về chuỗi ký tự và lưu vào xâu S;

\- B4: Trong khi i \< S.length():

Gán chuỗi temp = xâu S khi bỏ đi ký tự thứ I

Gán biến number = chuyển chuỗi temp về số

Nếu number \> max:

Gán max = number;

Gán i := i+1;

\- B5: Trả về max và kết thúc chương trình.

***Mã C++:***

int solution(int n)

{

string s = to_string(n);

int max = 0;

**for** (int i = 0; i \< s.length(); i++)

{

string temp = s;

temp.erase(i, 1);

int num = stoi(temp);

**if** (num \> max)

{

max = num;

}

}

**return** max;

}

## Land of Logic

### 52. longestWord

Định nghĩa một từ là một chuỗi các chữ cái tiếng Anh liên tiếp. Tìm từ
dài nhất từ ​​​​chuỗi đã cho.

***Ví dụ***

Với text = \"Ready, steady, go!\", đầu ra phải là solution(text) =
\"steady\".

***Thuật toán:***

\- B1: Nhận vào chuỗi S.

\- B2: Gán 2 chuỗi result = "" và temp = "", gán biến max = 0;

\- B3: Duyệt tuần tự tất cả các ký tự trong S:

Nếu gặp ký tự là chữ cái thì:

Thêm ký tự đó vào chuỗi temp;

Ngược lại:

Nếu độ dài của temp lớn hơn max thì:

Gán max = độ dài của temp;

Gán result = temp;

Gán temp = "";

\- B4: Trả về xâu result và kết thúc chương trình.

***Mã C++:***

string solution(string text)

{

string result = \"\";

string temp = \"\";

int max = 0;

int len = text.length();

**for** (int i = 0; i \<= len; i++)

{

**if** (isalpha(text\[i\]))

{

temp += text\[i\];

}

**else**

{

**if** (temp.length() \> max)

{

max = temp.length();

result = temp;

}

temp = \"\";

}

}

**return** result;

}

### 53. validTime

Kiểm tra xem chuỗi đã cho có phải là biểu diễn thời gian chính xác của
đồng hồ 24 giờ không.

***Ví dụ***

-   Với time = \"13:58\", đầu ra phải là solution(time) = true;

-   Với time = \"25:51\", đầu ra phải là solution(time) = false;

-   Với time = \"02:76\", đầu ra phải là solution(time) = false.

***Thuật toán:***

\- B1: Nhận vào xâu S cần kiểm tra;

\- B2: Nếu độ dài xâu khác 5 thì trả về false và kết thúc chương trình.

\- B3: Nếu ký tự giữa xâu S không phải là ':' thì trả về false và kết
thúc chương trình.

\- B4: Chuyển đổi 2 ký tự đầu và 2 ký tự cuối thành số nguyên và gán lần
lượt vào biến hour và minute.

Nếu hour không phải các số nguyên từ 0 đến 23, hoặc minute không phải
các số nguyên từ 0 đến 59 thì trả về false và kết thúc chương trình.

\- B5: Trả về true và kết thúc chương trình.

***Mã C++:***

bool solution(string time)

{

int len = time.length();

**if** (len != 5)

{

**return** false;

}

**if** (time\[2\] != \':\')

{

**return** false;

}

int hour = (time\[0\] - \'0\') \* 10 + (time\[1\] - \'0\');

int minute = (time\[3\] - \'0\') \* 10 + (time\[4\] - \'0\');

**if** (hour \< 0 \|\| hour \> 23)

{

**return** false;

}

**if** (minute \< 0 \|\| minute \> 59)

{

**return** false;

}

**return** true;

}

### 54. sumUpNumbers

CodeMaster vừa đi mua sắm về. Anh ta quét séc các mặt hàng mình đã mua
và đưa chuỗi kết quả cho Ratioorg để tính tổng số mặt hàng đã mua. Vì
Ratiorg là một bot nên anh ấy chắc chắn sẽ tự động hóa nó, vì vậy anh ấy
cần một chương trình tổng hợp tất cả các số xuất hiện trong đầu vào đã
cho.

Giúp Ratiorg bằng cách viết một hàm trả về tổng các số xuất hiện trong
inputString.

***Ví dụ***

Với inputString = \"2 apples, 12 oranges\", đầu ra phải là
**solution(inputString) = 14**.

***Thuật toán:***

\- B1: Nhận vào chuỗi S:

\- B2: Gán sum = 0, number = 0;

\- B3: Duyệt tuần tự các ký tự trong xâu S:

Nếu ký tự đó là số thì gán number = number \* 10 + giá trị số đó.

Ngược lại, thì:

Gán sum := sum + number;

Gán lại number := 0;

\- B4: Trả về sum và kết thúc chương trình.

***Mã C++:***

int solution(string inputString)

{

int len = inputString.length();

int sum = 0;

int number = 0;

**for** (int i = 0; i \<= len; i++)

{

**if** (isdigit(inputString\[i\]))

{

number = number \* 10 + (inputString\[i\] - \'0\');

}

**else**

{

sum += number;

number = 0;

}

}

**return** sum;

}

### 55. differentSquares

Cho một ma trận hình chữ nhật chỉ chứa các chữ số, hãy tính số các hình
vuông (2x2) trong đó.

***Ví dụ***

Với matrix = \[\[1, 2, 1\],

\[2, 2, 2\],

\[2, 2, 2\],

\[1, 2, 3\],

\[2, 2, 1\]\]

đầu ra phải là **solution(matrix) = 6**.

***Thuật toán:***

\- B1: Nhận vào một matrix S

\- B2: Khởi tạo một tập hợp T để lưu các matrix 2x2

\- B3: Đọc tuần tự tất cả các matrix t có kích thước 2x2 trong matrix S

Nếu t chưa từng xuất hiện trong T thì thêm t vào tập hợp T

\- B4: Trả về số lượng phần tử trong tập hợp T

***Mã C++:***

int solution(vector\<vector\<int\>\> matrix)

{

set\<vector\<int\>\> s;

**for** (int i = 0; i \< matrix.size() - 1; i++)

{

**for** (int j = 0; j \< matrix\[i\].size() - 1; j++)

{

vector\<int\> v;

v.push_back(matrix\[i\]\[j\]);

v.push_back(matrix\[i\]\[j + 1\]);

v.push_back(matrix\[i + 1\]\[j\]);

v.push_back(matrix\[i + 1\]\[j + 1\]);

s.insert(v);

}

}

**return** s.size();

}

### 56. digitsProduct

Cho một số nguyên product, tìm nguyên dương nhỏ nhất (nghĩa là lớn hơn
0) mà tích các chữ số của nó bằng product. Nếu không có số nguyên như
vậy, hãy trả về -1.

***Ví dụ***

-   Với product = 12, đầu ra phải là solution(product) = 26;

-   Với product = 19, đầu ra phải là solution(product) = -1.

***Thuật toán:***

\- B1: Nhận vào một số nguyên n.

\- B2: Nếu n = 0, thì trả về 10 và kết thúc chương trình.

\- B3: Nếu 0 \< n \< 10 thì trả về n và kết thúc chương trình.

\- B4: Nếu n \> 10:

Gán i := 9, result := 0, heso := 1;

Chuyển sang B5.

\- B5: Nếu i \> 1, chuyển sang B6

Ngược lại, chuyển sang B7.

\- B6: Trong khi n mod i = 0 thì:

Gán result := result + i \* heso.

Gán heso := heso \* 10;

Gán n := n div 10;

Gán i := i -- 1;

Quay lại B5.

\- B7: Nếu n = 1, trả về result và kết thúc chương trình.

Ngược lại, trả về -1 và kết thúc chương trình.

***Mã C++:***

int solution(int product)

{

**if** (product == 0)

{

**return** 10;

}

**if** (product \< 10)

{

**return** product;

}

int result = 0;

int multiplier = 1;

**for** (int i = 9; i \> 1; i\--)

{

**while** (product % i == 0)

{

result += i \* multiplier;

multiplier \*= 10;

product /= i;

}

}

**return** (product == 1) ? result : -1;

}

### 57. fileNaming

Bạn được cung cấp một chuỗi các chuỗi names đại diện cho tên tập tin.
Mảng được sắp xếp theo thứ tự tạo tệp, sao cho names\[i\] đại diện cho
tên của một tệp được tạo trước đó names\[i+1\] và sau names\[i-1\] (giả
sử lập chỉ mục dựa trên 0). Bởi vì tất cả các tệp phải có tên duy nhất,
các tệp được tạo sau có cùng tên với tệp được tạo trước đó nên có thêm
(k) hậu tố trong tên của họ, nơi k là số nguyên dương nhỏ nhất (bắt đầu
từ 1) không xuất hiện trong các tên tệp trước đó.

Nhiệm vụ của bạn là lặp qua tất cả các phần tử của names(từ trái sang
phải) và cập nhật tất cả các tên tệp dựa trên bên trên. Trả về một mảng
tên tệp thích hợp.

***Ví dụ***

Với names = \[\"doc\", \"doc\", \"image\", \"doc(1)\", \"doc\"\], đầu ra
phải là solution(names) = \[\"doc\", \"doc(1)\", \"image\",
\"doc(1)(1)\", \"doc(2)\"\].

-   Từ names\[0\] = \"doc\"Và names\[1\] = \"doc\", cập nhật names\[1\]
    = \"doc(1)\"

-   Từ names\[1\] = \"doc(1)\"Và names\[3\] = \"doc(1)\", cập nhật
    names\[3\] = \"doc(1)(1)\"

-   Từ names\[0\] = \"doc\", names\[1\] = \"doc(1)\", Và names\[4\] =
    \"doc\", cập nhật names\[4\] = \"doc(2)\"

***Thuật toán:***

\- B1: Nhận vào một mảng các tên file names

\- B2: Tạo mảng result để lưu kết quả.

\- B3: Duyệt tuần tự từng phần tử trong mảng names:

Gán name := names\[i\];

Gán k := 1;

Trong khi name đã từng xuất hiện trong mảng result thì:

Gán name := name\[i\] + "(k)"

k := k + 1;

Thêm name vào mảng result.

\- B4: Trả về result và kết thúc chương trình.

***Mã C++:***

vector\<string\> solution(vector\<string\> names)

{

vector\<string\> result;

**for** (int i = 0; i \< names.size(); i++)

{

string name = names\[i\];

int count = 1;

**while** (find(result.begin(), result.end(), name) != result.end())

{

name = names\[i\] + \"(\" + to_string(count) + \")\";

count++;

}

result.push_back(name);

}

**return** result;

}

### 58. messageFromBinaryCode

Bạn đang tham gia thử thách Escape Room được thiết kế dành riêng cho các
lập trình viên. Trong nỗ lực tìm kiếm manh mối, bạn đã tìm thấy một mã
nhị phân được viết trên bức tường đằng sau một chiếc bình và nhận ra
rằng đó phải là một tin nhắn được mã hóa. Sau một hồi suy nghĩ, dự đoán
đầu tiên của bạn là mỗi 8 bits của mã đại diện cho ký tự có mã ASCII mở
rộng tương ứng .

Giả sử rằng linh cảm của bạn là chính xác, hãy giải mã thông điệp.

***Ví dụ***

Với code = \"010010000110010101101100011011000110111100100001\", đầu ra
phải là

**solution(code) = \"Hello!\".**

Đầu tiên 8 ký tự của mã là 01001000, đó là 72 trong hệ thống số nhị
phân. 72 viết tắt của H trong bảng ASCII , vì vậy chữ cái đầu tiên là H.

Các chữ cái khác có thể được lấy theo cách tương tự.

***Thuật toán:***

\- B1: Nhận vào chuỗi code

\- B2: Chuyển đổi lần lượt 8 ký tự nhị phân trong chuỗi code thành số
nguyên và thêm ký tự tương ứng với số nguyên đó trong bảng ASCII vào
chuỗi result;

\- B3: Trả về result và kết thúc chương trình.

***Mã C++:***

string solution(string code)

{

string result = \"\";

**for** (int i = 0; i \< code.length(); i += 8)

{

int num = stoi(code.substr(i, 8), **nullptr**, 2);

result += (char)num;

}

**return** result;

}

### 59. spiralNumbers

Dựng ma trận vuông có kích thước N × N chứa các số nguyên từ 1 ĐẾN N \*
N theo thứ tự xoắn ốc, bắt đầu từ trên cùng bên trái và theo chiều kim
đồng hồ.

***Ví dụ***

Với n = 3, đầu ra phải là solution(n) = \[\[1, 2, 3\],

\[8, 9, 4\],

\[7, 6, 5\]\]

***Thuật toán:***

Ta ghi lần lượt các số vào ma trận theo đúng chiều kim đồng hồ.

Hàng trên cùng → Hàng bên phải cùng → Hàng dưới cùng → Hàng bên trái
cùng → \....

\- B1: Ta nhận vào số nguyên n.

\- B2: Tạo ma trận result có kích thước n x n và gán tất cả các phần tử
bằng 0.

\- B3: Gán minRow := 0, minCol := 0, maxRow := n -- 1, maxCol := n -- 1,
value := 1;

\- B4: Nếu value \<= n\*n, chuyển sang B5:

Ngược lại, chuyển sang B6:

\- B5: // Ghi hàng trên cùng

For i := minCol to maxCol then:

result\[minRow\]\[i\] := value;

value := value + 1;

minRow := minRow + 1;

// Ghi hàng phải cùng

For i := minRow to maxRow then:

result\[i\]\[maxCol\] := value;

value := value + 1;

maxCol := maxRow -- 1;

// Ghi hàng dưới cùng

For i:= maxCol downto minCol then:

result\[maxRow\]\[i\] := value;

value := value + 1;

maxRow := maxRow -- 1;

// Ghi hàng trái cùng

For i := maxRow downto minRow then:

result\[i\]\[minCol\] := value;

value := value + 1;

minCol := minCol + 1;

Quay lại B4.

\- B6: Trả về result và kết thúc chương trình.

***Mã C++:***

vector\<vector\<int\>\> solution(int n)

{

vector\<vector\<int\>\> result(n, vector\<int\>(n, 0));

int minRow = 0, maxRow = n - 1, minCol = 0, maxCol = n - 1;

int value = 1;

**while** (value \<= n \* n)

{

**for** (int i = minCol; i \<= maxCol; i++)

{

result\[minRow\]\[i\] = value++;

}

minRow++;

**for** (int i = minRow; i \<= maxRow; i++)

{

result\[i\]\[maxCol\] = value++;

}

maxCol\--;

**for** (int i = maxCol; i \>= minCol; i\--)

{

result\[maxRow\]\[i\] = value++;

}

maxRow\--;

**for** (int i = maxRow; i \>= minRow; i\--)

{

result\[i\]\[minCol\] = value++;

}

minCol++;

}

**return** result;

}

### 60. sudoku

Sudoku là một câu đố sắp xếp số. Mục tiêu là lấp đầy một lưới 9x9 với
các chữ số sao cho mỗi cột, mỗi hàng và mỗi trong số chín các lưới con
3x3 tạo thành lưới chứa tất cả các chữ số từ 1 ĐẾN 9.

Thuật toán này sẽ kiểm tra xem lưới số đã cho có đại diện cho một giải
pháp chính xác cho Sudoku hay không.

***Ví dụ***

Với grid = \[ \[1, 3, 2, 5, 4, 6, 9, 8, 7\],

\[4, 6, 5, 8, 7, 9, 3, 2, 1\],

\[7, 9, 8, 2, 1, 3, 6, 5, 4\],

\[9, 2, 1, 4, 3, 5, 8, 7, 6\],

\[3, 5, 4, 7, 6, 8, 2, 1, 9\],

\[6, 8, 7, 1, 9, 2, 5, 4, 3\],

\[5, 7, 6, 9, 8, 1, 4, 3, 2\],

\[2, 4, 3, 6, 5, 7, 1, 9, 8\],

\[8, 1, 9, 3, 2, 4, 7, 6, 5\] \]

đầu ra phải là **solution(grid) = true**;

***Thuật toán:***

\- B1: Nhận vào một ma trận A có kích thước 9x9

\- B2: Kiểm tra lần lượt 9 hàng trong ma trận A, nếu có bất kỳ hàng nào
không thỏa mãn đủ các số từ 1 đến 9 thì trả về false và kết thúc chương
trình.

\- B3: Kiểm tra lần lượt 9 cột trong ma trận A, nếu có bất kỳ cột nào
không thỏa mãn đủ các số từ 1 đến 9 thì trả về false và kết thúc chương
trình.

\- B4: Kiểm tra lần lượt từng ma trận 3x3 tỏng ma trận A, nếu có bất kỳ
ma trận nào không thỏa mãn đủ các số từ 1 đến 9 thì trả về false và kết
thúc chương trinh.

\- B5: Trả về true và kết thúc chương trình.

***Chú ý:*** Ở các bước kiểm tra trên, ta có thể dùng một mảng hoặc 1
tập hợp (set) để lưu các phần tử, xem chúng có đủ từ 1 đến 9 hay không.

**VD**: Duyệt tuần tự từng phần tử của một hàng trong ma trận 9x9. Nếu
phần tử đó đã từng xuất hiện trong mảng phụ (hoặc set) thì trả về false
và kết thúc. Ngược lại, nếu chưa thuộc thì thêm phần tử đó vào mảng phụ
(hoặc thêm vào set).

***Mã C++:***

bool solution(vector\<vector\<int\>\> grid)

{

set\<int\> s;

**for** (int i = 0; i \< 9; i++)

{

s.clear();

**for** (int j = 0; j \< 9; j++)

{

**if** (s.find(grid\[i\]\[j\]) != s.end())

{

**return** false;

}

s.insert(grid\[i\]\[j\]);

}

}

**for** (int i = 0; i \< 9; i++)

{

s.clear();

**for** (int j = 0; j \< 9; j++)

{

**if** (s.find(grid\[j\]\[i\]) != s.end())

{

**return** false;

}

s.insert(grid\[j\]\[i\]);

}

}

**for** (int i = 0; i \< 9; i += 3)

{

**for** (int j = 0; j \< 9; j += 3)

{

s.clear();

**for** (int k = 0; k \< 3; k++)

{

**for** (int l = 0; l \< 3; l++)

{

**if** (s.find(grid\[i + k\]\[j + l\]) != s.end())

{

**return** false;

}

s.insert(grid\[i + k\]\[j + l\]);

}

}

}

}

**return** true;

}

# The Core

## Intro Gates

### 1. addTwoDigit

Bạn được cho một số nguyên có hai chữ số n. Trả về tổng các chữ số của
nó.

***Ví dụ***

Với n = 29, đầu ra phải là **solution(n) = 11**.

***Thuật toán:***

\- B1: Nhận vào số nguyên n;

\- B2: Gán t1 := n div 10; t2 := n mod 10;

\- B3: Trả về t1+t2 và kết thúc chương trình.

***Mã C++:***

int solution(int n)

{

**return** n / 10 + n % 10;

}

### 2. largestNumber

Cho một số nguyên n, trả về số lớn nhất chứa chính xác nchữ số.

***Ví dụ***

Với n = 2, đầu ra phải là **solution(n) = 99**.

***Thuật toán:***

\- B1: Nhận vào số nguyên n;

\- B2: Tính 10\^n và gán vào biến S

\- B3: Trả về S-1 và kết thúc chương trình.

***Mã C++:***

int solution(int n)

{

**return** pow(10, n) - 1;

}

### 3. candies

N trẻ em đã có m miếng kẹo. Chúng muốn ăn càng nhiều kẹo càng tốt, nhưng
mỗi đứa trẻ phải ăn đúng số lượng kẹo như bất kỳ đứa trẻ nào khác. Xác
định xem tất cả trẻ em sẽ ăn cùng nhau bao nhiêu viên kẹo. Những miếng
kẹo riêng lẻ không thể bị tách ra.

***Ví dụ***

Với n = 3 Và m = 10, đầu ra phải là **solution(n, m) = 9.**

Mỗi đứa trẻ sẽ ăn 3 miếng. Vì vậy, câu trả lời là 9.

***Thuật toán:***

\- B1: Nhận vào 2 số nguyên n và m tương ứng với số đứa trẻ và tổng số
kẹo

\- B2: Tính số kẹo còn lại sau khi chia đều cho n đứa trẻ là: m mod n và
gán kết quả vào t

\- B3: Trả về m - t và kết thúc chương trình.

***Mã C++:***

int solution(int n, int m)

{

**return** m - (m % n);

}

### 4. seatsInTheater

Bạn của bạn khuyên bạn nên xem buổi biểu diễn mới ở nhà hát nổi tiếng
nhất thành phố. Anh ấy biết rất nhiều về nghệ thuật và lời khuyên của
anh ấy thường là tốt, nhưng không phải lúc này: màn trình diễn trở nên
buồn tẻ kinh khủng. Thật tệ khi bạn muốn lẻn ra ngoài, điều này khá đơn
giản, đặc biệt là khi lối ra nằm ngay sau hàng của bạn bên trái. Tất cả
những gì bạn cần làm là trèo qua chỗ ngồi của mình và tìm đường đến lối
ra.

Vấn đề chính là sự nhút nhát của bạn: bạn sợ rằng cuối cùng bạn sẽ chặn
tầm nhìn (dù chỉ trong vài giây) của tất cả những người ngồi phía sau
bạn và trong cột của bạn hoặc các cột bên trái bạn. Để lấy thêm can đảm,
bạn quyết định tính toán số người như vậy và xem liệu bạn có thể đi đến
lối ra mà không làm phiền quá nhiều người hay không.

Cho tổng số hàng và cột trong nhà hát ( nRowsVà nCols, tương ứng) và
rowVà columnbạn đang ngồi, hãy trả lại số người ngồi ngay phía sau bạn
và trong cột của bạn hoặc bên trái, giả sử tất cả các ghế đều có người
ngồi.

***Ví dụ***

Với nCols = 16, nRows = 11, col = 5, Và row = 3, đầu ra phải là
**solution(nCols, nRows, col, row) = 96**.

Đây là những gì nhà hát trông giống như:

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image11.png){width="4.216666666666667in"
height="2.5in"}

***Thuật toán:***

\- B1: Nhận vào các tham số nCols, nRows, col, row

\- B2: Tính số hàng bị che khuất tầm nhìn là nRows - row và gán kết quả
vào biến r.

\- B3: Tính số cột bị cheo khuất tầm nhìn là nCols - col + 1 và gán kết
quả vào biến c.

\- B4: Trả về r\*c và kết thúc chương trình.

***Mã C++:***

int solution(int nCols, int nRows, int col, int row)

{

**return** (nCols - col + 1) \* (nRows - row);

}

### 5. maxMultiple

Cho divisor và một bound, tìm số nguyên n lớn nhất sao cho:

-   n chia hết cho divisor.

-   n nhỏ hơn hoặc bằng bound.

-   n lớn hơn 0.

Nó được đảm bảo rằng một số như vậy tồn tại.

***Ví dụ***

Với divisor = 3 Và bound = 10, đầu ra phải là solution(divisor, bound) =
9.

Số nguyên lớn nhất chia hết cho 3 và không lớn hơn 10 là 9.

***Thuật toán:***

\- B1: Nhận vào 2 số nguyên divisor và bound

\- B2: Tính bound mod divisor và gán vào biến t

\- B3: Trả về bound - t và kết thúc chương trình.

***Mã C++:***

int solution(int divisor, int bound)

{

**return** bound - (bound % divisor);

}

### 6. circleOfNumber

Xét các số nguyên từ 0 ĐẾN n - 1được viết dọc theo đường tròn sao cho
khoảng cách giữa hai số lân cận bất kỳ bằng nhau (chú ý rằng 0 Và n -- 1
cũng là láng giềng).

Cho n Và firstNumber, tìm số viết ở vị trí bán kính đối với firstNumber.

***Ví dụ***

Với n = 10Và firstNumber = 2, đầu ra phải là **solution(n, firstNumber)
= 7**.

![](vertopal_f733b98e8efb4b38a9c300c2ecdde768/media/image4.png){width="1.9465277777777779in"
height="1.9826388888888888in"}

***Thuật toán:***

\- B1: Nhận vào 2 số nguyên n và firstNumber

\- B2: Cộng thêm bán kính vào firstNumber: firstNumber + n div 2. kết
quả ta lưu vào t.

\- B3: Trả về t mod n và kết thúc chương trình.

***Mã C++:***

int solution(int n, int firstNumber)

{

**return** (firstNumber + n / 2) % n;

}

### 7. lateRide

Một đêm nọ, bạn đi chơi trên chiếc xe máy của mình. Tại 00:00 bạn khởi
động động cơ và bộ đếm thời gian tích hợp sẽ tự động bắt đầu tính thời
lượng chuyến đi của bạn, tính bằng phút.

Cuối cùng, khi bạn quyết định quay trở lại, bạn nhận ra rằng có khả năng
các cây cầu trên đường về nhà của bạn đã bị hỏng, khiến bạn bị mắc kẹt!
Thật không may, bạn không có đồng hồ đeo tay và không biết bây giờ là
mấy giờ. Tất cả những gì bạn biết nhờ vào bộ đếm thời gian của xe đạp là
n phút đã trôi qua kể từ 00:00.

Sử dụng đồng hồ bấm giờ của xe đạp, hãy tính thời gian hiện tại. Trả về
câu trả lời dưới dạng tổng các chữ số mà bộ hẹn giờ kỹ thuật số ở định
dạng hh:mm Sẽ hiển thị.

***Ví dụ***

-   Với n = 240, đầu ra phải là solution(n) = 4.

    -   Từ 240 phút đã trôi qua, thời gian hiện tại là 04:00. Tổng các
        chữ số bằng 0 + 4 + 0 + 0 = 4, đó là câu trả lời.

-   Với n = 808, đầu ra phải là solution(n) = 14.

    -   808 phút có nghĩa là bây giờ nó là 13:28, vì vậy câu trả lời nên
        là 1 + 3 + 2 + 8 = 14.

***Thuật toán:***

\- B1: Nhận vào số nguyên n.

\- B2: Gán hours := n div 60;

Gán minutes := n mod 60;

\- B3: Gán sum := (hours div 10) + (hours mod 10) + (minutes div 10) +
(minutes mod 10).

\- B4: Trả về sum và kết thúc chương trình.

***Mã C++:***

int solution(int n)

{

int hours = n / 60;

int minutes = n % 60;

**return** hours / 10 + hours % 10 + minutes / 10 + minutes % 10;

}

### 8. phoneCall

Một số tỷ lệ sử dụng điện thoại có thể được mô tả như sau:

-   phí phút gọi đầu tiên là min1 xu,

-   mỗi phút từ thứ 2 đến thứ 10 (đã bao gồm) chi phí là min2_10 xu

-   mỗi phút sau chi phí thứ 10 là min11 xu.

Bạn có s xu trên tài khoản của bạn trước cuộc gọi. Thời lượng của cuộc
gọi dài nhất (tính bằng phút được làm tròn xuống số nguyên gần nhất) mà
bạn có thể có là bao nhiêu?

***Ví dụ***

Với min1 = 3, min2_10 = 1, min11 = 2, Và s = 20, đầu ra phải là
**solution(min1, min2_10, min11, s) = 14**.

Đây là lý do tại sao:

-   chi phí phút đầu tiên 3 xu, để lại cho bạn 20 - 3 = 17 xu;

-   tổng chi phí phút 2 đến 10là 1 \* 9 = 9, để bạn có thể nói chuyện
    nhiều hơn 9 phút nữa và vẫn có 17 - 9 = 8 xu;

-   chi phí mỗi phút tiếp theo 2 xu, có nghĩa là bạn có thể nói chuyện
    thêm 8 / 2 = 4 phút nữa.

Do đó, cuộc gọi dài nhất bạn có thể thực hiện là 1 + 9 + 4 = 14dài vài
phút.

***Thuật toán:***

\- B1: Nhận vào các số nguyên min1, min2_10, min11 và s.

\- B2: Gán longestTime := 0;

\- B3: Nếu s \>= min1 thì chuyển sang B4:

Ngược lại, chuyển trang B7;

\- B4: Gán longestTime := longestTime + 1;

Gán s := s -- min1;

Nếu s \>= min2_10 \* 9 thì chuyến sang B5:

Ngược lại, chuyển sang B6;

\- B5: Gán longestTime := longestTime + 9;

Gán s := s -- min2_10 \* 9;

Gán longestTime := longestTime + s div min11;

\- B6: Gán longestTime := longestTime + s div min2_10;

\- B7: Trả về longestTime và kết thúc chương trình.

***Mã C++:***

int solution(int min1, int min2_10, int min11, int s)

{

int longestTime = 0;

**if** (s \>= min1)

{

longestTime++;

s -= min1;

**if** (s \>= min2_10 \* 9)

{

longestTime += 9;

s -= min2_10 \* 9;

longestTime += s / min11;

}

**else**

{

longestTime += s / min2_10;

}

}

**return** longestTime;

}

## At the Crossroads

### 9. reachNextLevel

Bạn đang chơi một trò chơi RPG. Hiện tại tổng số điểm kinh nghiệm (XP)
của bạn bằng experience. Để đạt được cấp độ tiếp theo, XP của bạn ít
nhất phải là threshold. Nếu bạn giết quái vật trước mặt, bạn sẽ nhận
được nhiều điểm kinh nghiệm hơn với số lượng reward.

Giá trị đã cho experience, threshold Và reward, kiểm tra xem bạn có đạt
cấp độ tiếp theo sau khi giết quái vật không.

***Ví dụ***

-   Với experience = 10, threshold = 15, Và reward = 5, đầu ra phải là
    **solution(experience, threshold, reward) = true**;

-   Với experience = 10, threshold = 15, Và reward = 4, đầu ra phải là
    **solution(experience, threshold, reward) = false**.

***Thuật toán:***

\- B1: Nhận vào 3 số nguyên experience, threshold và reward.

\- B2: Nếu (experience + reward) \>= threshold thì trả về true và kết
thúc chương trình.

Ngược lại, trả về false và kết thúc chương trình.

***Mã C++:***

bool solution(int experience, int threshold, int reward)

{

**return** experience + reward \>= threshold;

}

### 10. knapsackLight

Bạn đã tìm thấy hai vật phẩm trong rương kho báu! Vật đầu tiên nặng
weight1và có giá trị value1, và vật thứ hai nặng weight2và có giá trị
value2. Tổng giá trị tối đa của các mặt hàng bạn có thể mang theo bên
mình là bao nhiêu, giả sử rằng khả năng chịu trọng lượng tối đa của bạn
là maxWvà bạn không thể quay lại lấy đồ sau này?

Lưu ý mỗi loại chỉ có 2 món đồ và mỗi loại không được mang nhiều hơn 1
món, tức là không được mang 2 món đồ thứ nhất và 2 món đồ thứ hai.

***Ví dụ***

-   Với value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, Và maxW = 8,
    đầu ra phải là **solution(value1, weight1, value2, weight2, maxW) =
    10.** Bạn chỉ có thể mang vật phẩm đầu tiên.

-   Với value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, Và maxW = 9,
    đầu ra phải là **solution(value1, weight1, value2, weight2, maxW) =
    16.** Bạn đủ khỏe để mang theo cả hai món đồ bên mình.

-   Với value1 = 5, weight1 = 3, value2 = 7, weight2 = 4, Và maxW = 6,
    đầu ra phải là ***solution(value1, weight1, value2, weight2, maxW) =
    7***. Bạn không thể lấy cả hai vật phẩm, nhưng bạn có thể lấy bất kỳ
    vật phẩm nào trong số chúng.

***Thuật toán:***

\- B1: Nhận vào các giá trị v1, w1, v2, w2, maxW;

\- B2: Nếu maxW nhỏ hơn cả w1 và w2 thì trả về 0 và kết thúc chương
trình.

\- B3: Nếu w1 \<= maxW \< w2, thì trả về v1 và kết thúc chương trình.

\- B4: Nếu w2 \<= maxW \< w1, thì trả về v2 và kết thúc chương trình.

\- B5: Nếu w1 \<= w2 \< maxW \< w1 + w2 thì trả về max(v1,v2) và kết
thúc chương trình.

\- B6: Nếu w1 + w2 \<= maxW thì trả về v1 + v2 và kết thúc chương trình.

***Mã C++:***

int solution(int value1, int weight1, int value2, int weight2, int maxW)

{

**if** (maxW \< weight1 && maxW \< weight2)

{

**return** 0;

}

**if** (maxW \>= weight1 && maxW \< weight2)

{

**return** value1;

}

**if** (maxW \>= weight2 && maxW \< weight1)

{

**return** value2;

}

**if** (maxW \>= weight1 && maxW \>= weight2 && maxW \< (weight1 +
weight2))

{

**return** max(value1, value2);

}

**return** value1 + value2;

}

### 11. extraNumber

Bạn được cho ba số nguyên, a, b Và c. Đảm bảo rằng hai trong số các số
nguyên này bằng nhau. Giá trị của số nguyên thứ ba là gì?

***Ví dụ***

Với a = 2, b = 7, Và c = 2, đầu ra phải là **solution(a, b, c) = 7.**

Hai số bằng nhau là aVà c. Số thứ ba ( b) bằng 7, đó là câu trả lời.

***Thuật toán:***

\- B1: Nhận vào 3 số nguyên a, b, c

\- B2: Nếu a = b thì trả về c và kết thúc chương trình.

\- B3: Nếu a = c thì trả về b và kết thúc chương trình.

\- B4: Trả về a và kết thúc chương trình.

***Mã C++:***

int solution(int a, int b, int c)

{

**if** (a == b)

{

**return** c;

}

**if** (a == c)

{

**return** b;

}

**return** a;

}

### 12. isInfiniteProcess

Cho 2 số nguyên a và b. Xác định xem mã giả sau có dẫn đến vòng lặp vô
hạn không

**while** a is not equal to b **do**

increase a by 1

decrease b by 1

Giả sử rằng chương trình được thực thi trên một máy ảo có thể lưu trữ
các số dài tùy ý và thực thi mãi mãi.

***Ví dụ***

-   Với a = 2 Và b = 6, đầu ra phải là **solution(a, b) = false;**

-   Với a = 2 Và b = 3, đầu ra phải là **solution(a, b) = true.**

***Nhận xét:***

Ta thấy:

-   khi a \> b thì vòng lặp sẽ vô hạn bởi vì a tăng lên và b giảm đi sẽ
    không bao giờ thu được 2 giá trị bằng nhau để kết thúc vòng lặp.

-   khi a = b thì vòng lặp không được thực hiện.

-   khi a \< b:

    -   Xét điều kiện dừng của vòng lặp: b - x = a + x hay 2x = b -- a;

        -   Nếu (b -- a) là một số chẵn thì chắc chắn tồn tại giá trị
            nguyên x thỏa mãn đẳng thức.

        -   Ngược lại, nếu (b -- a) là một số lẻ thì không tồn tại giá
            trị nguyên x thỏa mãn đẳng thức.

Kết luận: Nếu a \> b hoặc (b -- a) là số lẻ thì xảy ra vòng lặp vô hạn.

***Thuật toán:***

\- B1: Nhận vào 2 số nguyên a và b;

\- B2: Nếu a \> b hoặc (b -- a) mod 2 khác 0 thì trả về true và kết thúc
chương trình.

Ngược lại, trả về false và kết thúc chương trình.

***Mã C++:***

bool solution(int a, int b)

{

**return** (a \> b) \|\| ((b - a) % 2 != 0);

}

### 13. arithmeticExpression

Xét một biểu thức số học có dạng a#b=c. Kiểm tra xem có thể thay thế \#
với một trong bốn dấu hiệu: +, -, \* hoặc / để có được biểu thức đúng.

***Ví dụ***

-   Với a = 2, b = 3, Và c = 5, đầu ra phải là **solution(a, b, c) =
    true.**

    -   chúng ta có thể thay thế \# với một + để có được 2 + 3 = 5, vì
        vậy câu trả lời là true.

-   Với a = 8, b = 2, Và c = 4, đầu ra phải là **solution(a, b, c) =
    true**.

    -   chúng ta có thể thay thế \# với một / để có được 8 / 2 = 4, vì
        vậy câu trả lời là true.

-   Với a = 8, b = 3, Và c = 2, đầu ra phải là **solution(a, b, c) =
    false.**

    -   8 + 3 = 11 ≠ 2;

    -   8 - 3 = 5 ≠ 2;

    -   8 \* 3 = 24 ≠ 2;

    -   8 / 3 = 2.(6) ≠ 2.

    -   Vì vậy, câu trả lời là false.

***Thuật toán:***

***Mã C++:***
