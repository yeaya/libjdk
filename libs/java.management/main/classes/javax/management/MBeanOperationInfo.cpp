#include <javax/management/MBeanOperationInfo.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <jcpp.h>

#undef ACTION
#undef ACTION_INFO
#undef INFO
#undef NO_OPERATIONS
#undef NO_PARAMS
#undef UNKNOWN

using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;

namespace javax {
	namespace management {

void MBeanOperationInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

bool MBeanOperationInfo::$assertionsDisabled = false;
$MBeanOperationInfoArray* MBeanOperationInfo::NO_OPERATIONS = nullptr;

void MBeanOperationInfo::init$($String* description, $Method* method) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(method)->getName());
	$var($MBeanParameterInfoArray, var$1, methodSignature(method));
	$var($String, var$2, $nc(method->getReturnType())->getName());
	MBeanOperationInfo::init$(var$0, description, var$1, var$2, MBeanOperationInfo::UNKNOWN, $($Introspector::descriptorForElement($cast($AccessibleObject, method))));
}

void MBeanOperationInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature, $String* type, int32_t impact) {
	MBeanOperationInfo::init$(name, description, signature, type, impact, ($Descriptor*)nullptr);
}

void MBeanOperationInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature$renamed, $String* type, int32_t impact, $Descriptor* descriptor) {
	$useLocalObjectStack();
	$var($MBeanParameterInfoArray, signature, signature$renamed);
	$MBeanFeatureInfo::init$(name, description, descriptor);
	if (impact < MBeanOperationInfo::INFO || impact > MBeanOperationInfo::UNKNOWN) {
		$throwNew($IllegalArgumentException, $$str({"Argument impact can only be one of ACTION, ACTION_INFO, INFO, or UNKNOWN given value is :"_s, $$str(impact)}));
	}
	if (signature == nullptr || signature->length == 0) {
		$init($MBeanParameterInfo);
		$assign(signature, $MBeanParameterInfo::NO_PARAMS);
	} else {
		$assign(signature, $cast($MBeanParameterInfoArray, signature->clone()));
	}
	$set(this, signature, signature);
	$set(this, type, type);
	this->impact = impact;
	this->arrayGettersSafe = $MBeanInfo::arrayGettersSafe($of(this)->getClass(), MBeanOperationInfo::class$);
}

$Object* MBeanOperationInfo::clone() {
	try {
		return $MBeanFeatureInfo::clone();
	} catch ($CloneNotSupportedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* MBeanOperationInfo::getReturnType() {
	return this->type;
}

$MBeanParameterInfoArray* MBeanOperationInfo::getSignature() {
	if (this->signature == nullptr) {
		$init($MBeanParameterInfo);
		return $MBeanParameterInfo::NO_PARAMS;
	} else if (this->signature->length == 0) {
		return this->signature;
	} else {
		return $cast($MBeanParameterInfoArray, this->signature->clone());
	}
}

$MBeanParameterInfoArray* MBeanOperationInfo::fastGetSignature() {
	if (this->arrayGettersSafe) {
		if (this->signature == nullptr) {
			$init($MBeanParameterInfo);
			return $MBeanParameterInfo::NO_PARAMS;
		} else {
			return this->signature;
		}
	} else {
		return getSignature();
	}
}

int32_t MBeanOperationInfo::getImpact() {
	return this->impact;
}

$String* MBeanOperationInfo::toString() {
	$useLocalObjectStack();
	$var($String, impactString, nullptr);
	switch (getImpact()) {
	case MBeanOperationInfo::ACTION:
		$assign(impactString, "action"_s);
		break;
	case MBeanOperationInfo::ACTION_INFO:
		$assign(impactString, "action/info"_s);
		break;
	case MBeanOperationInfo::INFO:
		$assign(impactString, "info"_s);
		break;
	default:
		$assign(impactString, "unknown"_s);
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[description="_s);
	var$0->append($(getDescription()));
	var$0->append(", name="_s);
	var$0->append($(getName()));
	var$0->append(", returnType="_s);
	var$0->append($(getReturnType()));
	var$0->append(", signature="_s);
	var$0->append($($Arrays::asList($(fastGetSignature()))));
	var$0->append(", impact="_s);
	var$0->append(impactString);
	var$0->append(", descriptor="_s);
	var$0->append($(getDescriptor()));
	var$0->append("]"_s);
	return $str(var$0);
}

bool MBeanOperationInfo::equals(Object$* o) {
	$useLocalObjectStack();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanOperationInfo, o))) {
		return false;
	}
	$var(MBeanOperationInfo, p, $cast(MBeanOperationInfo, o));
	$var($Object, var$5, $nc(p)->getName());
	bool var$4 = $Objects::equals(var$5, $(getName()));
	if (var$4) {
		$var($Object, var$6, p->getReturnType());
		var$4 = $Objects::equals(var$6, $(getReturnType()));
	}
	bool var$3 = var$4;
	if (var$3) {
		$var($Object, var$7, p->getDescription());
		var$3 = $Objects::equals(var$7, $(getDescription()));
	}
	bool var$2 = var$3;
	if (var$2) {
		int32_t var$8 = p->getImpact();
		var$2 = var$8 == getImpact();
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($ObjectArray, var$9, p->fastGetSignature());
		var$1 = $Arrays::equals(var$9, $(fastGetSignature()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Object, var$10, p->getDescriptor());
		var$0 = $Objects::equals(var$10, $(getDescriptor()));
	}
	return (var$0);
}

int32_t MBeanOperationInfo::hashCode() {
	$useLocalObjectStack();
	return $Objects::hash($$new($ObjectArray, {
		$(getName()),
		$(getReturnType())
	}));
}

$MBeanParameterInfoArray* MBeanOperationInfo::methodSignature($Method* method) {
	$init(MBeanOperationInfo);
	$useLocalObjectStack();
	$var($ClassArray, classes, $nc(method)->getParameterTypes());
	$var($AnnotationArray2, annots, method->getParameterAnnotations());
	return parameters(classes, annots);
}

$MBeanParameterInfoArray* MBeanOperationInfo::parameters($ClassArray* classes, $AnnotationArray2* annots) {
	$init(MBeanOperationInfo);
	$useLocalObjectStack();
	$var($MBeanParameterInfoArray, params, $new($MBeanParameterInfoArray, $nc(classes)->length));
	if (!MBeanOperationInfo::$assertionsDisabled && !(classes->length == $nc(annots)->length)) {
		$throwNew($AssertionError);
	}
	for (int32_t i = 0; i < classes->length; ++i) {
		$var($Descriptor, d, $Introspector::descriptorForAnnotations($nc(annots)->get(i)));
		$var($String, pn, $str({"p"_s, $$str((i + 1))}));
		params->set(i, $$new($MBeanParameterInfo, pn, $($nc(classes->get(i))->getName()), ""_s, d));
	}
	return params;
}

void MBeanOperationInfo::clinit$($Class* clazz) {
	MBeanOperationInfo::$assertionsDisabled = !MBeanOperationInfo::class$->desiredAssertionStatus();
	$assignStatic(MBeanOperationInfo::NO_OPERATIONS, $new($MBeanOperationInfoArray, 0));
}

MBeanOperationInfo::MBeanOperationInfo() {
}

$Class* MBeanOperationInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MBeanOperationInfo, $assertionsDisabled)},
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanOperationInfo, serialVersionUID)},
		{"NO_OPERATIONS", "[Ljavax/management/MBeanOperationInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanOperationInfo, NO_OPERATIONS)},
		{"INFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MBeanOperationInfo, INFO)},
		{"ACTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MBeanOperationInfo, ACTION)},
		{"ACTION_INFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MBeanOperationInfo, ACTION_INFO)},
		{"UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MBeanOperationInfo, UNKNOWN)},
		{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanOperationInfo, type)},
		{"signature", "[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanOperationInfo, signature)},
		{"impact", "I", nullptr, $PRIVATE | $FINAL, $field(MBeanOperationInfo, impact)},
		{"arrayGettersSafe", "Z", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(MBeanOperationInfo, arrayGettersSafe)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(MBeanOperationInfo, init$, void, $String*, $Method*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(MBeanOperationInfo, init$, void, $String*, $String*, $MBeanParameterInfoArray*, $String*, int32_t)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;Ljava/lang/String;ILjavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(MBeanOperationInfo, init$, void, $String*, $String*, $MBeanParameterInfoArray*, $String*, int32_t, $Descriptor*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MBeanOperationInfo, clone, $Object*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MBeanOperationInfo, equals, bool, Object$*)},
		{"fastGetSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE, $method(MBeanOperationInfo, fastGetSignature, $MBeanParameterInfoArray*)},
		{"getImpact", "()I", nullptr, $PUBLIC, $virtualMethod(MBeanOperationInfo, getImpact, int32_t)},
		{"getReturnType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanOperationInfo, getReturnType, $String*)},
		{"getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC, $virtualMethod(MBeanOperationInfo, getSignature, $MBeanParameterInfoArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MBeanOperationInfo, hashCode, int32_t)},
		{"methodSignature", "(Ljava/lang/reflect/Method;)[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanOperationInfo, methodSignature, $MBeanParameterInfoArray*, $Method*)},
		{"parameters", "([Ljava/lang/Class;[[Ljava/lang/annotation/Annotation;)[Ljavax/management/MBeanParameterInfo;", "([Ljava/lang/Class<*>;[[Ljava/lang/annotation/Annotation;)[Ljavax/management/MBeanParameterInfo;", $STATIC, $staticMethod(MBeanOperationInfo, parameters, $MBeanParameterInfoArray*, $ClassArray*, $AnnotationArray2*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanOperationInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanOperationInfo",
		"javax.management.MBeanFeatureInfo",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanOperationInfo, name, initialize, &classInfo$$, MBeanOperationInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MBeanOperationInfo));
	});
	return class$;
}

$Class* MBeanOperationInfo::class$ = nullptr;

	} // management
} // javax