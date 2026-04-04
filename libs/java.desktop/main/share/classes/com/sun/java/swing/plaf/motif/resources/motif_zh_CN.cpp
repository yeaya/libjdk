#include <com/sun/java/swing/plaf/motif/resources/motif_zh_CN.h>
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
					namespace motif {
						namespace resources {

void motif_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif_zh_CN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"*"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			u"中止文件选择器对话框。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.enterFileNameLabel.textAndMnemonic"_s,
			u"输入文件名(&N):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.enterFolderNameLabel.textAndMnemonic"_s,
			u"输入文件夹名:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesLabel.textAndMnemonic"_s,
			u"文件(&I)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filterLabel.textAndMnemonic"_s,
			u"筛选器(&R)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.foldersLabel.textAndMnemonic"_s,
			u"文件夹(&L)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			u"帮助"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButtonToolTip.textAndMnemonic"_s,
			u"FileChooser 帮助。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			u"确定"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"打开所选文件。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"打开"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.pathLabel.textAndMnemonic"_s,
			u"输入路径或文件夹名(&P):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			u"保存"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			u"保存所选文件。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			u"保存"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			u"更新"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButtonToolTip.textAndMnemonic"_s,
			u"更新目录列表。"_s
		})
	});
}

motif_zh_CN::motif_zh_CN() {
}

$Class* motif_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(motif_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(motif_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.resources.motif_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(motif_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(motif_zh_CN);
	});
	return class$;
}

$Class* motif_zh_CN::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com