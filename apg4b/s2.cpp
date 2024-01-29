// 2024/01/29
// 関数のreturnはループに関係なく抜けることができる

void func(/* 処理に必要な変数 */)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            /* 処理 */

            if (i == 2)
            {
                return; // 関数のreturnはループに関係なく抜けることができる
            }
        }
    }
}

int main()
{
    func();
}
