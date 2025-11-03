#include <javax/annotation/processing/SupportedOptions.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace javax {
	namespace annotation {
		namespace processing {

$Attribute SupportedOptions_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute SupportedOptions_Attribute_var$0[] = {
	{"value", '[', SupportedOptions_Attribute_var$1},
	{}
};

$NamedAttribute SupportedOptions_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SupportedOptions_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Target;", SupportedOptions_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", SupportedOptions_Attribute_var$2},
	{}
};

$MethodInfo _SupportedOptions_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SupportedOptions_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"javax.annotation.processing.SupportedOptions",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SupportedOptions_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SupportedOptions_Annotations_
};

$Object* allocate$SupportedOptions($Class* clazz) {
	return $of($alloc(SupportedOptions));
}

$Class* SupportedOptions::load$($String* name, bool initialize) {
	$loadClass(SupportedOptions, name, initialize, &_SupportedOptions_ClassInfo_, allocate$SupportedOptions);
	return class$;
}

$Class* SupportedOptions::class$ = nullptr;

		} // processing
	} // annotation
} // javax