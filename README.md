第一次课笔记整理：
1.GitHub生成ssh密钥步骤：
  （1）打开一个文件夹，空白处右键，选择Git Bash Here
   (2)执行命令ssh-keygen -t rsa
   (3)找到.ssh文件夹中的id_rsa.pub(密钥），复制到网页的相应位置即可
2.把GitHub上的文件下载到本地并更新上传：
   （1）新建一个文件夹，用来存储
   （2）打开此文件夹，右键，选择Git Bash Here
   （3）首次下载需要执行这两条命令
        $git config --global user.email "你的邮箱“
	$git config --global user.email "你的名字“
   （4）$git clone "文件在GitHub上的地址“
    (5)$cat README.md(查看文件内容）
   （6)$git add README.md(更新内容）
   （7)$git commit -m "更新原因：......"(相当于注释）
   （8)$git push(上传）
