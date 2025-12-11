#include <javax/annotation/processing/SupportedSourceVersion.h>

#include <javax/lang/model/SourceVersion.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace annotation {
		namespace processing {

$Attribute SupportedSourceVersion_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute SupportedSourceVersion_Attribute_var$0[] = {
	{"value", '[', SupportedSourceVersion_Attribute_var$1},
	{}
};

$NamedAttribute SupportedSourceVersion_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SupportedSourceVersion_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Target;", SupportedSourceVersion_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", SupportedSourceVersion_Attribute_var$2},
	{}
};

$MethodInfo _SupportedSourceVersion_MethodInfo_[] = {
	{"value", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SupportedSourceVersion_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"javax.annotation.processing.SupportedSourceVersion",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SupportedSourceVersion_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SupportedSourceVersion_Annotations_
};

$Object* allocate$SupportedSourceVersion($Class* clazz) {
	return $of($alloc(SupportedSourceVersion));
}

$Class* SupportedSourceVersion::load$($String* name, bool initialize) {
	$loadClass(SupportedSourceVersion, name, initialize, &_SupportedSourceVersion_ClassInfo_, allocate$SupportedSourceVersion);
	return class$;
}

$Class* SupportedSourceVersion::class$ = nullptr;

		} // processing
	} // annotation
} // javax