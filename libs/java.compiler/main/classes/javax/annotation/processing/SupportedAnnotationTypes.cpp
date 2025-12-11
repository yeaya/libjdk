#include <javax/annotation/processing/SupportedAnnotationTypes.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace annotation {
		namespace processing {

$Attribute SupportedAnnotationTypes_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute SupportedAnnotationTypes_Attribute_var$0[] = {
	{"value", '[', SupportedAnnotationTypes_Attribute_var$1},
	{}
};

$NamedAttribute SupportedAnnotationTypes_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SupportedAnnotationTypes_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Target;", SupportedAnnotationTypes_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", SupportedAnnotationTypes_Attribute_var$2},
	{}
};

$MethodInfo _SupportedAnnotationTypes_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SupportedAnnotationTypes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"javax.annotation.processing.SupportedAnnotationTypes",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SupportedAnnotationTypes_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SupportedAnnotationTypes_Annotations_
};

$Object* allocate$SupportedAnnotationTypes($Class* clazz) {
	return $of($alloc(SupportedAnnotationTypes));
}

$Class* SupportedAnnotationTypes::load$($String* name, bool initialize) {
	$loadClass(SupportedAnnotationTypes, name, initialize, &_SupportedAnnotationTypes_ClassInfo_, allocate$SupportedAnnotationTypes);
	return class$;
}

$Class* SupportedAnnotationTypes::class$ = nullptr;

		} // processing
	} // annotation
} // javax