#include <javax/management/MBeanConstructorInfo.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <jcpp.h>

#undef NO_CONSTRUCTORS
#undef NO_PARAMS

using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Constructor = ::java::lang::reflect::Constructor;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;

namespace javax {
	namespace management {

void MBeanConstructorInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

$MBeanConstructorInfoArray* MBeanConstructorInfo::NO_CONSTRUCTORS = nullptr;

void MBeanConstructorInfo::init$($String* description, $Constructor* constructor) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(constructor)->getName());
	$var($MBeanParameterInfoArray, var$1, constructorSignature(constructor));
	MBeanConstructorInfo::init$(var$0, description, var$1, $($Introspector::descriptorForElement($cast($AccessibleObject, constructor))));
}

void MBeanConstructorInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature) {
	MBeanConstructorInfo::init$(name, description, signature, nullptr);
}

void MBeanConstructorInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature$renamed, $Descriptor* descriptor) {
	$var($MBeanParameterInfoArray, signature, signature$renamed);
	$MBeanFeatureInfo::init$(name, description, descriptor);
	if (signature == nullptr || signature->length == 0) {
		$init($MBeanParameterInfo);
		$assign(signature, $MBeanParameterInfo::NO_PARAMS);
	} else {
		$assign(signature, $cast($MBeanParameterInfoArray, signature->clone()));
	}
	$set(this, signature, signature);
	this->arrayGettersSafe = $MBeanInfo::arrayGettersSafe($of(this)->getClass(), MBeanConstructorInfo::class$);
}

$Object* MBeanConstructorInfo::clone() {
	try {
		return $MBeanFeatureInfo::clone();
	} catch ($CloneNotSupportedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$MBeanParameterInfoArray* MBeanConstructorInfo::getSignature() {
	if ($nc(this->signature)->length == 0) {
		return this->signature;
	} else {
		return $cast($MBeanParameterInfoArray, this->signature->clone());
	}
}

$MBeanParameterInfoArray* MBeanConstructorInfo::fastGetSignature() {
	if (this->arrayGettersSafe) {
		return this->signature;
	} else {
		return getSignature();
	}
}

$String* MBeanConstructorInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[description="_s);
	var$0->append($(getDescription()));
	var$0->append(", name="_s);
	var$0->append($(getName()));
	var$0->append(", signature="_s);
	var$0->append($($Arrays::asList($(fastGetSignature()))));
	var$0->append(", descriptor="_s);
	var$0->append($(getDescriptor()));
	var$0->append("]"_s);
	return $str(var$0);
}

bool MBeanConstructorInfo::equals(Object$* o) {
	$useLocalObjectStack();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanConstructorInfo, o))) {
		return false;
	}
	$var(MBeanConstructorInfo, p, $cast(MBeanConstructorInfo, o));
	$var($Object, var$3, $nc(p)->getName());
	bool var$2 = $Objects::equals(var$3, $(getName()));
	if (var$2) {
		$var($Object, var$4, p->getDescription());
		var$2 = $Objects::equals(var$4, $(getDescription()));
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($ObjectArray, var$5, p->fastGetSignature());
		var$1 = $Arrays::equals(var$5, $(fastGetSignature()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Object, var$6, p->getDescriptor());
		var$0 = $Objects::equals(var$6, $(getDescriptor()));
	}
	return (var$0);
}

int32_t MBeanConstructorInfo::hashCode() {
	$useLocalObjectStack();
	int32_t var$0 = $Objects::hash($$new($ObjectArray, {$(getName())}));
	return var$0 ^ $Arrays::hashCode($(fastGetSignature()));
}

$MBeanParameterInfoArray* MBeanConstructorInfo::constructorSignature($Constructor* cn) {
	$init(MBeanConstructorInfo);
	$useLocalObjectStack();
	$var($ClassArray, classes, $nc(cn)->getParameterTypes());
	$var($AnnotationArray2, annots, cn->getParameterAnnotations());
	return $MBeanOperationInfo::parameters(classes, annots);
}

void MBeanConstructorInfo::clinit$($Class* clazz) {
	$assignStatic(MBeanConstructorInfo::NO_CONSTRUCTORS, $new($MBeanConstructorInfoArray, 0));
}

MBeanConstructorInfo::MBeanConstructorInfo() {
}

$Class* MBeanConstructorInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanConstructorInfo, serialVersionUID)},
		{"NO_CONSTRUCTORS", "[Ljavax/management/MBeanConstructorInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanConstructorInfo, NO_CONSTRUCTORS)},
		{"arrayGettersSafe", "Z", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(MBeanConstructorInfo, arrayGettersSafe)},
		{"signature", "[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanConstructorInfo, signature)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Constructor;)V", "(Ljava/lang/String;Ljava/lang/reflect/Constructor<*>;)V", $PUBLIC, $method(MBeanConstructorInfo, init$, void, $String*, $Constructor*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;)V", nullptr, $PUBLIC, $method(MBeanConstructorInfo, init$, void, $String*, $String*, $MBeanParameterInfoArray*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(MBeanConstructorInfo, init$, void, $String*, $String*, $MBeanParameterInfoArray*, $Descriptor*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MBeanConstructorInfo, clone, $Object*)},
		{"constructorSignature", "(Ljava/lang/reflect/Constructor;)[Ljavax/management/MBeanParameterInfo;", "(Ljava/lang/reflect/Constructor<*>;)[Ljavax/management/MBeanParameterInfo;", $PRIVATE | $STATIC, $staticMethod(MBeanConstructorInfo, constructorSignature, $MBeanParameterInfoArray*, $Constructor*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MBeanConstructorInfo, equals, bool, Object$*)},
		{"fastGetSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE, $method(MBeanConstructorInfo, fastGetSignature, $MBeanParameterInfoArray*)},
		{"getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC, $virtualMethod(MBeanConstructorInfo, getSignature, $MBeanParameterInfoArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MBeanConstructorInfo, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanConstructorInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanConstructorInfo",
		"javax.management.MBeanFeatureInfo",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanConstructorInfo, name, initialize, &classInfo$$, MBeanConstructorInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MBeanConstructorInfo));
	});
	return class$;
}

$Class* MBeanConstructorInfo::class$ = nullptr;

	} // management
} // javax