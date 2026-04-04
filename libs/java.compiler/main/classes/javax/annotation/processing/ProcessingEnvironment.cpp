#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/annotation/processing/Filer.h>
#include <javax/annotation/processing/Messager.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/lang/model/util/Types.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Filer = ::javax::annotation::processing::Filer;
using $Messager = ::javax::annotation::processing::Messager;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $Elements = ::javax::lang::model::util::Elements;
using $Types = ::javax::lang::model::util::Types;

namespace javax {
	namespace annotation {
		namespace processing {

bool ProcessingEnvironment::isPreviewEnabled() {
	return false;
}

$Class* ProcessingEnvironment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getElementUtils", "()Ljavax/lang/model/util/Elements;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingEnvironment, getElementUtils, $Elements*)},
		{"getFiler", "()Ljavax/annotation/processing/Filer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingEnvironment, getFiler, $Filer*)},
		{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingEnvironment, getLocale, $Locale*)},
		{"getMessager", "()Ljavax/annotation/processing/Messager;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingEnvironment, getMessager, $Messager*)},
		{"getOptions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingEnvironment, getOptions, $Map*)},
		{"getSourceVersion", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingEnvironment, getSourceVersion, $SourceVersion*)},
		{"getTypeUtils", "()Ljavax/lang/model/util/Types;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingEnvironment, getTypeUtils, $Types*)},
		{"isPreviewEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessingEnvironment, isPreviewEnabled, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.annotation.processing.ProcessingEnvironment",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ProcessingEnvironment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessingEnvironment);
	});
	return class$;
}

$Class* ProcessingEnvironment::class$ = nullptr;

		} // processing
	} // annotation
} // javax