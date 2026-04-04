#include <com/sun/java/swing/plaf/gtk/resources/gtk_zh_TW.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						namespace resources {

void gtk_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_zh_TW::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			u"所有檔案"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			u"中止檔案選擇器對話方塊。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.deleteFileButton.textAndMnemonic"_s,
			u"刪除檔案(&L)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesLabel.textAndMnemonic"_s,
			u"檔案(&F)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filterLabel.textAndMnemonic"_s,
			u"篩選:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.foldersLabel.textAndMnemonic"_s,
			u"資料夾(&D)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderButton.textAndMnemonic"_s,
			u"新建資料夾(&N)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderDialog.textAndMnemonic"_s,
			u"資料夾名稱:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s,
			u"建立目錄 \"{0}\" 時發生錯誤: 沒有此檔案或目錄"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s,
			u"錯誤"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			u"確定"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"開啟選取的檔案。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"開啟"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.pathLabel.textAndMnemonic"_s,
			u"選取(&S):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileButton.textAndMnemonic"_s,
			u"重新命名檔案(&R)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileDialog.textAndMnemonic"_s,
			u"將檔案 \"{0}\" 重新命名為"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.textAndMnemonic"_s,
			u"將檔案 \"{0}\" 重新命名為 \"{1}\" 時出現錯誤"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.titleAndMnemonic"_s,
			u"錯誤"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			u"確定"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			u"儲存選取的檔案。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			u"儲存"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.blue.textAndMnemonic"_s,
			u"藍(&B):"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.color.textAndMnemonic"_s,
			u"顏色名稱(&N):"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.green.textAndMnemonic"_s,
			u"綠(&G):"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.hue.textAndMnemonic"_s,
			u"色調(&H):"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.red.textAndMnemonic"_s,
			u"紅(&E):"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.saturation.textAndMnemonic"_s,
			u"彩度(&S):"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.textAndMnemonic"_s,
			u"GTK 色彩選擇器(&G)"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.value.textAndMnemonic"_s,
			u"值(&V):"_s
		})
	});
}

gtk_zh_TW::gtk_zh_TW() {
}

$Class* gtk_zh_TW::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(gtk_zh_TW, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(gtk_zh_TW, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.resources.gtk_zh_TW",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(gtk_zh_TW, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(gtk_zh_TW);
	});
	return class$;
}

$Class* gtk_zh_TW::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com