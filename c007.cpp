#include <iostream>
using namespace std;
int main()
{
    string s;
    int a=0;
    while(getline(cin,s))
    {
        
        for(int i=0; i<s.length(); i++)
        {
            //int a=0; 也不能宣告在這 否則依樣被歸零//
            if(s[i]=='"') //字串是雙引號 字元是淡引號//
            {               
                // s[i]={}; 不能這樣打//
                //s[i]='``';//               
                //int a=0;宣告的地方有問題//
                a++;
                if(a%2==0)
                {
                    cout<<"''";
                }
                else 
                {
                    cout<<"``";
                }
                
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    
    //ctrl+z 模擬end of file//


}
/*TeX 是一種由 Donald Knuth 所發展出的一套文書排版軟體。這套軟體可以將原始文件檔加上一些像字型等型態後，轉成一份很漂亮的文件。而一份漂亮的文件是需要用 `` 和 " 來把別人說的話給「引」出來，而不是用大部份鍵盤上有的 " 。雖然鍵盤裡通常不會有這種有方向的雙引號鍵，不過上面有左單引號 ` （有人叫 backquote ），和右單引號 ' （有人叫 apostrophe 或 quote ）。你可以在你的鍵盤上找一下，不過要小心不要將 ` 與 \ （ backslash 鍵）搞混了。而在 TeX 裡，使用者可以輸入兩個左單引號 `` 來構成一個左雙引號 `` ，或者是兩個右單引號 '' 來構造一個右單引號 '' ，不過呢，通常大家打字時都很習慣用普通的雙引號 " 來引述別人的話。

如果原始文件檔內容是：

"To be or not to be," quoth the bard, "that is the question."

則 TeX 作出來的文件並不會是我們所想要的：

``To be or not to be," quoth the bard, ``that is the question."

為了要得到上面的文件，我們需要把原始文件變成這個樣子：

``To be or not to be,'' quoth the bard, ``that is the question.''

你現在必須要寫一個程式，將普通的雙引號（"），轉成有方向性的雙引號，而其它文字則不變。而在把普通的雙引號換掉的時候，要特別注意，當要開始引述一句話時要用 `` ，而結束引述時要用 '' 。不用擔心會有多層巢狀引號的情形，也就是第一個引號一定是用 `` 來代替，再來用 ''，然後用 `` ，接著用 '' ，依此類推。

輸入說明
輸入是若干列的文字，其中有偶數個雙引號（ " ），以 end-of-file 做結束。輸出的文字必須和輸入的一模一樣，除了：
* 每一組雙引號的第一個 " 必須用兩個 ` 字元（就是 `` ）來代替
* 每一組雙引號的第二個 " 必須用兩個 ' 字元（ 就是 ''）來代替。

輸出說明
同上

範例輸入 #1
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!"
範例輸出 #1
``To be or not to be,'' quoth the Bard, ``that
is the question''.
The programming contestant replied: ``I must disagree.
To `C' or not to `C', that is The Question!''
*/