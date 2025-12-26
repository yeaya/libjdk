#include <jdk.jartool.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <com/sun/jarsigner/ContentSigner.h>
#include <com/sun/jarsigner/ContentSignerParameters.h>
#include <jdk/security/jarsigner/JarSigner.h>
#include <jdk/security/jarsigner/JarSigner$Builder.h>
#include <jdk/security/jarsigner/JarSigner$JarSignerParameters.h>
#include <jdk/security/jarsigner/JarSigner$SignatureFile.h>
#include <jdk/security/jarsigner/JarSignerException.h>
#include <sun/security/tools/jarsigner/Main.h>
#include <sun/security/tools/jarsigner/Resources.h>
#include <sun/security/tools/jarsigner/Resources_ja.h>
#include <sun/security/tools/jarsigner/Resources_zh_CN.h>
#include <sun/tools/jar/CommandLine.h>
#include <sun/tools/jar/FingerPrint.h>
#include <sun/tools/jar/FingerPrint$ClassAttributes.h>
#include <sun/tools/jar/FingerPrint$Field.h>
#include <sun/tools/jar/FingerPrint$Method.h>
#include <sun/tools/jar/GNUStyleOptions.h>
#include <sun/tools/jar/GNUStyleOptions$1.h>
#include <sun/tools/jar/GNUStyleOptions$10.h>
#include <sun/tools/jar/GNUStyleOptions$11.h>
#include <sun/tools/jar/GNUStyleOptions$12.h>
#include <sun/tools/jar/GNUStyleOptions$13.h>
#include <sun/tools/jar/GNUStyleOptions$14.h>
#include <sun/tools/jar/GNUStyleOptions$15.h>
#include <sun/tools/jar/GNUStyleOptions$16.h>
#include <sun/tools/jar/GNUStyleOptions$17.h>
#include <sun/tools/jar/GNUStyleOptions$18.h>
#include <sun/tools/jar/GNUStyleOptions$19.h>
#include <sun/tools/jar/GNUStyleOptions$2.h>
#include <sun/tools/jar/GNUStyleOptions$20.h>
#include <sun/tools/jar/GNUStyleOptions$21.h>
#include <sun/tools/jar/GNUStyleOptions$22.h>
#include <sun/tools/jar/GNUStyleOptions$3.h>
#include <sun/tools/jar/GNUStyleOptions$4.h>
#include <sun/tools/jar/GNUStyleOptions$5.h>
#include <sun/tools/jar/GNUStyleOptions$6.h>
#include <sun/tools/jar/GNUStyleOptions$7.h>
#include <sun/tools/jar/GNUStyleOptions$8.h>
#include <sun/tools/jar/GNUStyleOptions$9.h>
#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/JarException.h>
#include <sun/tools/jar/JarToolProvider.h>
#include <sun/tools/jar/Main.h>
#include <sun/tools/jar/Main$1.h>
#include <sun/tools/jar/Main$CRC32OutputStream.h>
#include <sun/tools/jar/Main$Entry.h>
#include <sun/tools/jar/Main$Hasher.h>
#include <sun/tools/jar/Main$Hasher$1.h>
#include <sun/tools/jar/Main$Hasher$2.h>
#include <sun/tools/jar/Main$ModuleInfoEntry.h>
#include <sun/tools/jar/Main$StreamedModuleInfoEntry.h>
#include <sun/tools/jar/Main$ZipFileModuleInfoEntry.h>
#include <sun/tools/jar/Validator.h>
#include <sun/tools/jar/Validator$InvalidJarException.h>
#include <sun/tools/jar/resources/jar.h>
#include <sun/tools/jar/resources/jar_de.h>
#include <sun/tools/jar/resources/jar_es.h>
#include <sun/tools/jar/resources/jar_fr.h>
#include <sun/tools/jar/resources/jar_it.h>
#include <sun/tools/jar/resources/jar_ja.h>
#include <sun/tools/jar/resources/jar_ko.h>
#include <sun/tools/jar/resources/jar_pt_BR.h>
#include <sun/tools/jar/resources/jar_sv.h>
#include <sun/tools/jar/resources/jar_zh_CN.h>
#include <sun/tools/jar/resources/jar_zh_HK.h>
#include <sun/tools/jar/resources/jar_zh_TW.h>

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$jartool_classes_[] = {
	$classEntry("com.sun.jarsigner.ContentSigner", ::com::sun::jarsigner::ContentSigner),
	$classEntry("com.sun.jarsigner.ContentSignerParameters", ::com::sun::jarsigner::ContentSignerParameters),
	$classEntry("jdk.security.jarsigner.JarSigner", ::jdk::security::jarsigner::JarSigner),
	$classEntry("jdk.security.jarsigner.JarSigner$Builder", ::jdk::security::jarsigner::JarSigner$Builder),
	$classEntry("jdk.security.jarsigner.JarSigner$JarSignerParameters", ::jdk::security::jarsigner::JarSigner$JarSignerParameters),
	$classEntry("jdk.security.jarsigner.JarSigner$SignatureFile", ::jdk::security::jarsigner::JarSigner$SignatureFile),
	$classEntry("jdk.security.jarsigner.JarSignerException", ::jdk::security::jarsigner::JarSignerException),
	$classEntry("sun.security.tools.jarsigner.Main", ::sun::security::tools::jarsigner::Main),
	$classEntry("sun.security.tools.jarsigner.Resources", ::sun::security::tools::jarsigner::Resources),
	$classEntry("sun.security.tools.jarsigner.Resources_ja", ::sun::security::tools::jarsigner::Resources_ja),
	$classEntry("sun.security.tools.jarsigner.Resources_zh_CN", ::sun::security::tools::jarsigner::Resources_zh_CN),
	$classEntry("sun.tools.jar.CommandLine", ::sun::tools::jar::CommandLine),
	$classEntry("sun.tools.jar.FingerPrint", ::sun::tools::jar::FingerPrint),
	$classEntry("sun.tools.jar.FingerPrint$ClassAttributes", ::sun::tools::jar::FingerPrint$ClassAttributes),
	$classEntry("sun.tools.jar.FingerPrint$Field", ::sun::tools::jar::FingerPrint$Field),
	$classEntry("sun.tools.jar.FingerPrint$Method", ::sun::tools::jar::FingerPrint$Method),
	$classEntry("sun.tools.jar.GNUStyleOptions", ::sun::tools::jar::GNUStyleOptions),
	$classEntry("sun.tools.jar.GNUStyleOptions$1", ::sun::tools::jar::GNUStyleOptions$1),
	$classEntry("sun.tools.jar.GNUStyleOptions$10", ::sun::tools::jar::GNUStyleOptions$10),
	$classEntry("sun.tools.jar.GNUStyleOptions$11", ::sun::tools::jar::GNUStyleOptions$11),
	$classEntry("sun.tools.jar.GNUStyleOptions$12", ::sun::tools::jar::GNUStyleOptions$12),
	$classEntry("sun.tools.jar.GNUStyleOptions$13", ::sun::tools::jar::GNUStyleOptions$13),
	$classEntry("sun.tools.jar.GNUStyleOptions$14", ::sun::tools::jar::GNUStyleOptions$14),
	$classEntry("sun.tools.jar.GNUStyleOptions$15", ::sun::tools::jar::GNUStyleOptions$15),
	$classEntry("sun.tools.jar.GNUStyleOptions$16", ::sun::tools::jar::GNUStyleOptions$16),
	$classEntry("sun.tools.jar.GNUStyleOptions$17", ::sun::tools::jar::GNUStyleOptions$17),
	$classEntry("sun.tools.jar.GNUStyleOptions$18", ::sun::tools::jar::GNUStyleOptions$18),
	$classEntry("sun.tools.jar.GNUStyleOptions$19", ::sun::tools::jar::GNUStyleOptions$19),
	$classEntry("sun.tools.jar.GNUStyleOptions$2", ::sun::tools::jar::GNUStyleOptions$2),
	$classEntry("sun.tools.jar.GNUStyleOptions$20", ::sun::tools::jar::GNUStyleOptions$20),
	$classEntry("sun.tools.jar.GNUStyleOptions$21", ::sun::tools::jar::GNUStyleOptions$21),
	$classEntry("sun.tools.jar.GNUStyleOptions$22", ::sun::tools::jar::GNUStyleOptions$22),
	$classEntry("sun.tools.jar.GNUStyleOptions$3", ::sun::tools::jar::GNUStyleOptions$3),
	$classEntry("sun.tools.jar.GNUStyleOptions$4", ::sun::tools::jar::GNUStyleOptions$4),
	$classEntry("sun.tools.jar.GNUStyleOptions$5", ::sun::tools::jar::GNUStyleOptions$5),
	$classEntry("sun.tools.jar.GNUStyleOptions$6", ::sun::tools::jar::GNUStyleOptions$6),
	$classEntry("sun.tools.jar.GNUStyleOptions$7", ::sun::tools::jar::GNUStyleOptions$7),
	$classEntry("sun.tools.jar.GNUStyleOptions$8", ::sun::tools::jar::GNUStyleOptions$8),
	$classEntry("sun.tools.jar.GNUStyleOptions$9", ::sun::tools::jar::GNUStyleOptions$9),
	$classEntry("sun.tools.jar.GNUStyleOptions$BadArgs", ::sun::tools::jar::GNUStyleOptions$BadArgs),
	$classEntry("sun.tools.jar.GNUStyleOptions$Option", ::sun::tools::jar::GNUStyleOptions$Option),
	$classEntry("sun.tools.jar.GNUStyleOptions$OptionType", ::sun::tools::jar::GNUStyleOptions$OptionType),
	$classEntry("sun.tools.jar.JarException", ::sun::tools::jar::JarException),
	$classEntry("sun.tools.jar.JarToolProvider", ::sun::tools::jar::JarToolProvider),
	$classEntry("sun.tools.jar.Main", ::sun::tools::jar::Main),
	$classEntry("sun.tools.jar.Main$1", ::sun::tools::jar::Main$1),
	$classEntry("sun.tools.jar.Main$CRC32OutputStream", ::sun::tools::jar::Main$CRC32OutputStream),
	$classEntry("sun.tools.jar.Main$Entry", ::sun::tools::jar::Main$Entry),
	$classEntry("sun.tools.jar.Main$Hasher", ::sun::tools::jar::Main$Hasher),
	$classEntry("sun.tools.jar.Main$Hasher$1", ::sun::tools::jar::Main$Hasher$1),
	$classEntry("sun.tools.jar.Main$Hasher$2", ::sun::tools::jar::Main$Hasher$2),
	$classEntry("sun.tools.jar.Main$ModuleInfoEntry", ::sun::tools::jar::Main$ModuleInfoEntry),
	$classEntry("sun.tools.jar.Main$StreamedModuleInfoEntry", ::sun::tools::jar::Main$StreamedModuleInfoEntry),
	$classEntry("sun.tools.jar.Main$ZipFileModuleInfoEntry", ::sun::tools::jar::Main$ZipFileModuleInfoEntry),
	$classEntry("sun.tools.jar.Validator", ::sun::tools::jar::Validator),
	$classEntry("sun.tools.jar.Validator$InvalidJarException", ::sun::tools::jar::Validator$InvalidJarException),
	$classEntry("sun.tools.jar.resources.jar", ::sun::tools::jar::resources::jar),
	$classEntry("sun.tools.jar.resources.jar_de", ::sun::tools::jar::resources::jar_de),
	$classEntry("sun.tools.jar.resources.jar_es", ::sun::tools::jar::resources::jar_es),
	$classEntry("sun.tools.jar.resources.jar_fr", ::sun::tools::jar::resources::jar_fr),
	$classEntry("sun.tools.jar.resources.jar_it", ::sun::tools::jar::resources::jar_it),
	$classEntry("sun.tools.jar.resources.jar_ja", ::sun::tools::jar::resources::jar_ja),
	$classEntry("sun.tools.jar.resources.jar_ko", ::sun::tools::jar::resources::jar_ko),
	$classEntry("sun.tools.jar.resources.jar_pt_BR", ::sun::tools::jar::resources::jar_pt_BR),
	$classEntry("sun.tools.jar.resources.jar_sv", ::sun::tools::jar::resources::jar_sv),
	$classEntry("sun.tools.jar.resources.jar_zh_CN", ::sun::tools::jar::resources::jar_zh_CN),
	$classEntry("sun.tools.jar.resources.jar_zh_HK", ::sun::tools::jar::resources::jar_zh_HK),
	$classEntry("sun.tools.jar.resources.jar_zh_TW", ::sun::tools::jar::resources::jar_zh_TW)
};

const char* _jdk$jartool_packages_[] = {
	"com.sun.jarsigner",
	"jdk.security.jarsigner",
	"sun.security.tools.jarsigner",
	"sun.tools.jar",
	"sun.tools.jar.resources"
};

void jdk$jartool$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_jdk$jartool_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$jartool_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void jdk$jartool$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$jartool$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$jartool$GetPackages() {
	int32_t length = $lengthOf(_jdk$jartool_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_jdk$jartool_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* jdk$jartool$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$jartool_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$jartool_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* jdk$jartool$GetResource($String* name) {
	return nullptr;
}

void jdk$jartool::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.jartool", "17.35", "",
		&_jdk$jartool_ModuleInfo_,
		jdk$jartool$LibEventAction,
		jdk$jartool$GetPackages,
		jdk$jartool$GetClassEntry,
		jdk$jartool$GetResource
	};
	$System::addLibrary(&lib);
}