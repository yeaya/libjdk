#include <com/apple/laf/AquaFileChooserUI$DnDHandler$1.h>
#include <com/apple/laf/AquaFileChooserUI$DnDHandler.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/io/File.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $AquaFileChooserUI$DnDHandler = ::com::apple::laf::AquaFileChooserUI$DnDHandler;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$DnDHandler$1::init$($AquaFileChooserUI$DnDHandler* this$1, $FileArray* val$files) {
	$set(this, this$1, this$1);
	$set(this, val$files, val$files);
}

void AquaFileChooserUI$DnDHandler$1::run() {
	$useLocalObjectStack();
	$var($AquaFileSystemModel, fileSystemModel, $nc(this->this$1->this$0)->getModel());
	{
		$var($FileArray, arr$, this->val$files);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($File, element, arr$->get(i$));
			{
				int32_t index = $nc(fileSystemModel)->indexOf(element);
				if (index >= 0) {
					$nc(this->this$1->this$0->fFileList)->addRowSelectionInterval(index, index);
				}
			}
		}
	}
}

AquaFileChooserUI$DnDHandler$1::AquaFileChooserUI$DnDHandler$1() {
}

$Class* AquaFileChooserUI$DnDHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/apple/laf/AquaFileChooserUI$DnDHandler;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DnDHandler$1, this$1)},
		{"val$files", "[Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DnDHandler$1, val$files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI$DnDHandler;[Ljava/io/File;)V", "()V", 0, $method(AquaFileChooserUI$DnDHandler$1, init$, void, $AquaFileChooserUI$DnDHandler*, $FileArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DnDHandler$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFileChooserUI$DnDHandler",
		"dropFiles",
		"([Ljava/io/File;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$DnDHandler", "com.apple.laf.AquaFileChooserUI", "DnDHandler", 0},
		{"com.apple.laf.AquaFileChooserUI$DnDHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$DnDHandler$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$DnDHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$DnDHandler$1);
	});
	return class$;
}

$Class* AquaFileChooserUI$DnDHandler$1::class$ = nullptr;

		} // laf
	} // apple
} // com