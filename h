[33mcommit 01ad9157cf120fc61d472c0fd66a58ce36b4df94[m
Author: Josh Abernathy <joshaber@gmail.com>
Date:   Tue Mar 10 16:09:04 2015 -0400

    :tada: Added .gitattributes & .gitignore files

[1mdiff --git a/.gitattributes b/.gitattributes[m
[1mnew file mode 100644[m
[1mindex 0000000..bdb0cab[m
[1m--- /dev/null[m
[1m+++ b/.gitattributes[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32m# Auto detect text files and perform LF normalization[m
[32m+[m[32m* text=auto[m
[32m+[m
[32m+[m[32m# Custom for Visual Studio[m
[32m+[m[32m*.cs     diff=csharp[m
[32m+[m
[32m+[m[32m# Standard to msysgit[m
[32m+[m[32m*.doc	 diff=astextplain[m
[32m+[m[32m*.DOC	 diff=astextplain[m
[32m+[m[32m*.docx diff=astextplain[m
[32m+[m[32m*.DOCX diff=astextplain[m
[32m+[m[32m*.dot  diff=astextplain[m
[32m+[m[32m*.DOT  diff=astextplain[m
[32m+[m[32m*.pdf  diff=astextplain[m
[32m+[m[32m*.PDF	 diff=astextplain[m
[32m+[m[32m*.rtf	 diff=astextplain[m
[32m+[m[32m*.RTF	 diff=astextplain[m
[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..96374c4[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,43 @@[m
[32m+[m[32m# Windows image file caches[m
[32m+[m[32mThumbs.db[m
[32m+[m[32mehthumbs.db[m
[32m+[m
[32m+[m[32m# Folder config file[m
[32m+[m[32mDesktop.ini[m
[32m+[m
[32m+[m[32m# Recycle Bin used on file shares[m
[32m+[m[32m$RECYCLE.BIN/[m
[32m+[m
[32m+[m[32m# Windows Installer files[m
[32m+[m[32m*.cab[m
[32m+[m[32m*.msi[m
[32m+[m[32m*.msm[m
[32m+[m[32m*.msp[m
[32m+[m
[32m+[m[32m# Windows shortcuts[m
[32m+[m[32m*.lnk[m
[32m+[m
[32m+[m[32m# =========================[m
[32m+[m[32m# Operating System Files[m
[32m+[m[32m# =========================[m
[32m+[m
[32m+[m[32m# OSX[m
[32m+[m[32m# =========================[m
[32m+[m
[32m+[m[32m.DS_Store[m
[32m+[m[32m.AppleDouble[m
[32m+[m[32m.LSOverride[m
[32m+[m
[32m+[m[32m# Thumbnails[m
[32m+[m[32m._*[m
[32m+[m
[32m+[m[32m# Files that might appear on external disk[m
[32m+[m[32m.Spotlight-V100[m
[32m+[m[32m.Trashes[m
[32m+[m
[32m+[m[32m# Directories potentially created on remote AFP share[m
[32m+[m[32m.AppleDB[m
[32m+[m[32m.AppleDesktop[m
[32m+[m[32mNetwork Trash Folder[m
[32m+[m[32mTemporary Items[m
[32m+[m[32m.apdisk[m
