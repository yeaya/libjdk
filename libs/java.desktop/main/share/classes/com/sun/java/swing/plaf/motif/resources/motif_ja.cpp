#include <com/sun/java/swing/plaf/motif/resources/motif_ja.h>
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

void motif_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif_ja::getContents() {
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
			u"ファイル・チューザ・ダイアログを終了します。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.enterFileNameLabel.textAndMnemonic"_s,
			u"ファイル名を入力(&N):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.enterFolderNameLabel.textAndMnemonic"_s,
			u"フォルダ名を入力:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesLabel.textAndMnemonic"_s,
			u"ファイル(&I)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filterLabel.textAndMnemonic"_s,
			u"フィルタ(&R)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.foldersLabel.textAndMnemonic"_s,
			u"フォルダ(&L)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			u"ヘルプ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButtonToolTip.textAndMnemonic"_s,
			u"FileChooserのヘルプです。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"選択したファイルを開きます。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"開く"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.pathLabel.textAndMnemonic"_s,
			u"パスまたはフォルダ名を入力(&P):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			u"保存"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			u"選択したファイルを保存します。"_s
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
			u"ディレクトリのリストを更新します。"_s
		})
	});
}

motif_ja::motif_ja() {
}

$Class* motif_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(motif_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(motif_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.resources.motif_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(motif_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(motif_ja);
	});
	return class$;
}

$Class* motif_ja::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com