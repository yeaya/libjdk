#include <com/apple/laf/AquaFileChooserUI$3.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/io/File.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$3::init$($AquaFileChooserUI* this$0, $File* val$f) {
	$set(this, this$0, this$0);
	$set(this, val$f, val$f);
}

void AquaFileChooserUI$3::run() {
	$nc(this->this$0->fFileList)->requestFocusInWindow();
	$nc(this->this$0->fFileList)->ensureIndexIsVisible($$nc(this->this$0->getModel())->indexOf(this->val$f));
}

AquaFileChooserUI$3::AquaFileChooserUI$3() {
}

$Class* AquaFileChooserUI$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$3, this$0)},
		{"val$f", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$3, val$f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljava/io/File;)V", "()V", 0, $method(AquaFileChooserUI$3, init$, void, $AquaFileChooserUI*, $File*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFileChooserUI",
		"ensureFileIsVisible",
		"(Ljavax/swing/JFileChooser;Ljava/io/File;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$3",
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
	$loadClass(AquaFileChooserUI$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$3);
	});
	return class$;
}

$Class* AquaFileChooserUI$3::class$ = nullptr;

		} // laf
	} // apple
} // com