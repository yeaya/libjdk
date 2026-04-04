#include <com/sun/java/swing/plaf/windows/resources/windows_ko.h>
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
					namespace windows {
						namespace resources {

void windows_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* windows_ko::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.detailsViewActionLabel.textAndMnemonic"_s,
			u"세부정보"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonAccessibleName"_s,
			u"세부정보"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s,
			u"세부정보"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileAttrHeader.textAndMnemonic"_s,
			u"속성"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDateHeader.textAndMnemonic"_s,
			u"수정 날짜"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameHeader.textAndMnemonic"_s,
			u"이름"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameLabel.textAndMnemonic"_s,
			u"파일 이름(&N):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeHeader.textAndMnemonic"_s,
			u"크기"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileTypeHeader.textAndMnemonic"_s,
			u"유형"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesOfTypeLabel.textAndMnemonic"_s,
			u"파일 유형(&T):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.folderNameLabel.textAndMnemonic"_s,
			u"폴더 이름(&N):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderAccessibleName"_s,
			u"홈"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderToolTip.textAndMnemonic"_s,
			u"홈"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewActionLabel.textAndMnemonic"_s,
			u"목록"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonAccessibleName"_s,
			u"목록"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonToolTip.textAndMnemonic"_s,
			u"목록"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.lookInLabel.textAndMnemonic"_s,
			u"찾는 위치(&I):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderAccessibleName"_s,
			u"새 폴더"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderActionLabel.textAndMnemonic"_s,
			u"새 폴더"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderToolTip.textAndMnemonic"_s,
			u"새 폴더 생성"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.refreshActionLabel.textAndMnemonic"_s,
			u"새로고침"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveInLabel.textAndMnemonic"_s,
			u"저장 위치:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderAccessibleName"_s,
			u"위로"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderToolTip.textAndMnemonic"_s,
			u"한 레벨 위로"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuButtonAccessibleName"_s,
			u"보기 메뉴"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuButtonToolTipText"_s,
			u"보기 메뉴"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuLabel.textAndMnemonic"_s,
			u"보기"_s
		})
	});
}

windows_ko::windows_ko() {
}

$Class* windows_ko::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(windows_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(windows_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.resources.windows_ko",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(windows_ko, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(windows_ko);
	});
	return class$;
}

$Class* windows_ko::class$ = nullptr;

						} // resources
					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com