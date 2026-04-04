#include <com/sun/swing/internal/plaf/synth/resources/synth_zh_CN.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace synth {
						namespace resources {

void synth_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* synth_zh_CN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.detailsViewActionLabel.textAndMnemonic"_s,
			u"详细信息"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonAccessibleName"_s,
			u"详细信息"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s,
			u"详细信息"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileAttrHeader.textAndMnemonic"_s,
			u"属性"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDateHeader.textAndMnemonic"_s,
			u"修改日期"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameHeader.textAndMnemonic"_s,
			u"名称"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameLabel.textAndMnemonic"_s,
			u"文件名(&N):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeHeader.textAndMnemonic"_s,
			u"大小"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileTypeHeader.textAndMnemonic"_s,
			u"类型"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesOfTypeLabel.textAndMnemonic"_s,
			u"文件类型(&T):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.folderNameLabel.textAndMnemonic"_s,
			u"文件夹名(&N):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderAccessibleName"_s,
			u"主目录"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderToolTip.textAndMnemonic"_s,
			u"主目录"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewActionLabel.textAndMnemonic"_s,
			u"列表"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonAccessibleName"_s,
			u"列表"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonToolTip.textAndMnemonic"_s,
			u"列表"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.lookInLabel.textAndMnemonic"_s,
			u"查找(&I):"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderAccessibleName"_s,
			u"新建文件夹"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderActionLabel.textAndMnemonic"_s,
			u"新建文件夹"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderToolTip.textAndMnemonic"_s,
			u"创建新文件夹"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.refreshActionLabel.textAndMnemonic"_s,
			u"刷新"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveInLabel.textAndMnemonic"_s,
			u"保存: "_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderAccessibleName"_s,
			u"向上"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderToolTip.textAndMnemonic"_s,
			u"向上一级"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuLabel.textAndMnemonic"_s,
			u"视图"_s
		})
	});
}

synth_zh_CN::synth_zh_CN() {
}

$Class* synth_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(synth_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(synth_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.swing.internal.plaf.synth.resources.synth_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(synth_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(synth_zh_CN);
	});
	return class$;
}

$Class* synth_zh_CN::class$ = nullptr;

						} // resources
					} // synth
				} // plaf
			} // internal
		} // swing
	} // sun
} // com