#include <javax/annotation/processing/Generated.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace annotation {
		namespace processing {

$NamedAttribute Generated_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
	{}
};

$Attribute Generated_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'e', "Ljava/lang/annotation/ElementType; LOCAL_VARIABLE"},
	{'e', "Ljava/lang/annotation/ElementType; PARAMETER"},
	{'-'}
};

$NamedAttribute Generated_Attribute_var$1[] = {
	{"value", '[', Generated_Attribute_var$2},
	{}
};

$CompoundAttribute _Generated_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", Generated_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Generated_Attribute_var$1},
	{}
};

$Attribute _Generated_DefaultValue_comments0 = {
	's', ""
};

$Attribute _Generated_DefaultValue_date1 = {
	's', ""
};

$MethodInfo _Generated_MethodInfo_[] = {
	{"comments", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_Generated_DefaultValue_comments0},
	{"date", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_Generated_DefaultValue_date1},
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Generated_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"javax.annotation.processing.Generated",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Generated_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Generated_Annotations_
};

$Object* allocate$Generated($Class* clazz) {
	return $of($alloc(Generated));
}

$Class* Generated::load$($String* name, bool initialize) {
	$loadClass(Generated, name, initialize, &_Generated_ClassInfo_, allocate$Generated);
	return class$;
}

$Class* Generated::class$ = nullptr;

		} // processing
	} // annotation
} // javax