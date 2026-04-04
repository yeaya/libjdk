#include <com/apple/laf/AquaFileChooserUI$AcceptAllFileFilter.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$AcceptAllFileFilter::init$() {
	$FileFilter::init$();
}

bool AquaFileChooserUI$AcceptAllFileFilter::accept($File* f) {
	return true;
}

$String* AquaFileChooserUI$AcceptAllFileFilter::getDescription() {
	return $UIManager::getString("FileChooser.acceptAllFileFilterText"_s);
}

AquaFileChooserUI$AcceptAllFileFilter::AquaFileChooserUI$AcceptAllFileFilter() {
}

$Class* AquaFileChooserUI$AcceptAllFileFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaFileChooserUI$AcceptAllFileFilter, init$, void)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$AcceptAllFileFilter, accept, bool, $File*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$AcceptAllFileFilter, getDescription, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$AcceptAllFileFilter", "com.apple.laf.AquaFileChooserUI", "AcceptAllFileFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$AcceptAllFileFilter",
		"javax.swing.filechooser.FileFilter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$AcceptAllFileFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$AcceptAllFileFilter);
	});
	return class$;
}

$Class* AquaFileChooserUI$AcceptAllFileFilter::class$ = nullptr;

		} // laf
	} // apple
} // com