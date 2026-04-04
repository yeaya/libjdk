#include <javax/swing/plaf/basic/BasicFileChooserUI$AcceptAllFileFilter.h>
#include <java/io/File.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicFileChooserUI$AcceptAllFileFilter::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FileFilter::init$();
}

bool BasicFileChooserUI$AcceptAllFileFilter::accept($File* f) {
	return true;
}

$String* BasicFileChooserUI$AcceptAllFileFilter::getDescription() {
	return $UIManager::getString("FileChooser.acceptAllFileFilterText"_s);
}

BasicFileChooserUI$AcceptAllFileFilter::BasicFileChooserUI$AcceptAllFileFilter() {
}

$Class* BasicFileChooserUI$AcceptAllFileFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$AcceptAllFileFilter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PUBLIC, $method(BasicFileChooserUI$AcceptAllFileFilter, init$, void, $BasicFileChooserUI*)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$AcceptAllFileFilter, accept, bool, $File*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$AcceptAllFileFilter, getDescription, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicFileChooserUI$AcceptAllFileFilter", "javax.swing.plaf.basic.BasicFileChooserUI", "AcceptAllFileFilter", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicFileChooserUI$AcceptAllFileFilter",
		"javax.swing.filechooser.FileFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicFileChooserUI"
	};
	$loadClass(BasicFileChooserUI$AcceptAllFileFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicFileChooserUI$AcceptAllFileFilter);
	});
	return class$;
}

$Class* BasicFileChooserUI$AcceptAllFileFilter::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax