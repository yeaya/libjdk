#include <javax/management/MBeanParameterInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <jcpp.h>

#undef NO_PARAMS

using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;

namespace javax {
	namespace management {

void MBeanParameterInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

$MBeanParameterInfoArray* MBeanParameterInfo::NO_PARAMS = nullptr;

void MBeanParameterInfo::init$($String* name, $String* type, $String* description) {
	MBeanParameterInfo::init$(name, type, description, ($Descriptor*)nullptr);
}

void MBeanParameterInfo::init$($String* name, $String* type, $String* description, $Descriptor* descriptor) {
	$MBeanFeatureInfo::init$(name, description, descriptor);
	$set(this, type, type);
}

$Object* MBeanParameterInfo::clone() {
	try {
		return $MBeanFeatureInfo::clone();
	} catch ($CloneNotSupportedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* MBeanParameterInfo::getType() {
	return this->type;
}

$String* MBeanParameterInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[description="_s);
	var$0->append($(getDescription()));
	var$0->append(", name="_s);
	var$0->append($(getName()));
	var$0->append(", type="_s);
	var$0->append($(getType()));
	var$0->append(", descriptor="_s);
	var$0->append($(getDescriptor()));
	var$0->append("]"_s);
	return $str(var$0);
}

bool MBeanParameterInfo::equals(Object$* o) {
	$useLocalObjectStack();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanParameterInfo, o))) {
		return false;
	}
	$var(MBeanParameterInfo, p, $cast(MBeanParameterInfo, o));
	$var($Object, var$3, $nc(p)->getName());
	bool var$2 = $Objects::equals(var$3, $(getName()));
	if (var$2) {
		$var($Object, var$4, p->getType());
		var$2 = $Objects::equals(var$4, $(getType()));
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($Object, var$5, p->getDescription());
		var$1 = $Objects::equals(var$5, $(getDescription()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Object, var$6, p->getDescriptor());
		var$0 = $Objects::equals(var$6, $(getDescriptor()));
	}
	return (var$0);
}

int32_t MBeanParameterInfo::hashCode() {
	$useLocalObjectStack();
	return $Objects::hash($$new($ObjectArray, {
		$(getName()),
		$(getType())
	}));
}

void MBeanParameterInfo::clinit$($Class* clazz) {
	$assignStatic(MBeanParameterInfo::NO_PARAMS, $new($MBeanParameterInfoArray, 0));
}

MBeanParameterInfo::MBeanParameterInfo() {
}

$Class* MBeanParameterInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanParameterInfo, serialVersionUID)},
		{"NO_PARAMS", "[Ljavax/management/MBeanParameterInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanParameterInfo, NO_PARAMS)},
		{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanParameterInfo, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MBeanParameterInfo, init$, void, $String*, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(MBeanParameterInfo, init$, void, $String*, $String*, $String*, $Descriptor*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MBeanParameterInfo, clone, $Object*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MBeanParameterInfo, equals, bool, Object$*)},
		{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanParameterInfo, getType, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MBeanParameterInfo, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanParameterInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanParameterInfo",
		"javax.management.MBeanFeatureInfo",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanParameterInfo, name, initialize, &classInfo$$, MBeanParameterInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MBeanParameterInfo));
	});
	return class$;
}

$Class* MBeanParameterInfo::class$ = nullptr;

	} // management
} // javax