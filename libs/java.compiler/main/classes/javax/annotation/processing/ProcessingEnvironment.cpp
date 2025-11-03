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

$MethodInfo _ProcessingEnvironment_MethodInfo_[] = {
	{"getElementUtils", "()Ljavax/lang/model/util/Elements;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFiler", "()Ljavax/annotation/processing/Filer;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMessager", "()Ljavax/annotation/processing/Messager;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOptions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getSourceVersion", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeUtils", "()Ljavax/lang/model/util/Types;", nullptr, $PUBLIC | $ABSTRACT},
	{"isPreviewEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ProcessingEnvironment_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.annotation.processing.ProcessingEnvironment",
	nullptr,
	nullptr,
	nullptr,
	_ProcessingEnvironment_MethodInfo_
};

$Object* allocate$ProcessingEnvironment($Class* clazz) {
	return $of($alloc(ProcessingEnvironment));
}

bool ProcessingEnvironment::isPreviewEnabled() {
	return false;
}

$Class* ProcessingEnvironment::load$($String* name, bool initialize) {
	$loadClass(ProcessingEnvironment, name, initialize, &_ProcessingEnvironment_ClassInfo_, allocate$ProcessingEnvironment);
	return class$;
}

$Class* ProcessingEnvironment::class$ = nullptr;

		} // processing
	} // annotation
} // javax