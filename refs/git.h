
#---git 本地搭建远程仓库---
1.新建一个用于存放仓库的文件夹'git-monitor',终端进入文件夹
2.git init //在该文件夹下初始化一个git仓库
3.git add 文件名或文件路径 //将Xcode工程文件夹移入该文件夹中,并添加到代码仓库中
4.git commit -m "" //提交更新
5.git remote add origin ssh://Apple@192.168.1.12/Users/Apple/Desktop/git-monitor
'Apple 为Mac用户名 必须填写'目前只能通过管理员进入,普通用户不行
git remote rm origin //移除添加的远程分支
6.git config receive.denyCurrentBranch ignore
7.git push origin master //在本地仓库添加一个远程仓库,并将本地的master分支跟踪到远程分支
"origin 就代指远程仓库的路径
报错:'error: src refspec master does not match any. 原因:空的仓库无法添加
'Everything up-to-date' 说明远程仓库搭建成功

#配置:m
用户与群组--添加普通用户 "***不能通过普通用户访问***"
共享--打开文件共享,远程登录//允许其他用户远程登录

#---git 成员本地使用---
//从远程主机克隆一个版本库,执行远程操作的第一步
git clone ssh://Apple@192.168.1.12/Users/Apple/Desktop/git-monitor
"clone完成之后，git会自动为你将此远程仓库命名为origin"

git branch 分支名 //创建新的分支
git branch //查看分支
git branch -r //查看远程当前分支
git branch -a //查看远程所有分支

git checkout master //切换到master分支

git fetch //抓取 获取远程更新情况
git pull //拉取 获取远程更新情况并合并到本地(fetch + merge)
每次

git add . //commit前先add
git commit -m "" //提交更新到本地分支
git push -u origin master //将本地分支推送给远程分支,并将origin设为默认主机
git push //设置默认主机后不需再加参数


第一次push失败要设置
git config receive.denyCurrentBranch ignore
