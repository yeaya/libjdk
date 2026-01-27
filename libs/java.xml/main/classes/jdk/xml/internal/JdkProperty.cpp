#include <jdk/xml/internal/JdkProperty.h>

#include <java/lang/Enum.h>
#include <jdk/xml/internal/JdkProperty$ImplPropMap.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jcpp.h>

#undef DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkProperty$ImplPropMap = ::jdk::xml::internal::JdkProperty$ImplPropMap;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;

namespace jdk {
	namespace xml {
		namespace internal {

$FieldInfo _JdkProperty_FieldInfo_[] = {
	{"pName", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PRIVATE, $field(JdkProperty, pName)},
	{"pValue", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(JdkProperty, pValue)},
	{"pState", "Ljdk/xml/internal/JdkProperty$State;", nullptr, $PRIVATE, $field(JdkProperty, pState)},
	{}
};

$MethodInfo _JdkProperty_MethodInfo_[] = {
	{"<init>", "(Ljdk/xml/internal/JdkProperty$ImplPropMap;Ljava/lang/Object;Ljdk/xml/internal/JdkProperty$State;)V", "(Ljdk/xml/internal/JdkProperty$ImplPropMap;TT;Ljdk/xml/internal/JdkProperty$State;)V", $PUBLIC, $method(JdkProperty, init$, void, $JdkProperty$ImplPropMap*, Object$*, $JdkProperty$State*)},
	{"getValue", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $method(JdkProperty, getValue, $Object*)},
	{"setValue", "(Ljava/lang/String;Ljava/lang/Object;Ljdk/xml/internal/JdkProperty$State;)Z", "(Ljava/lang/String;TT;Ljdk/xml/internal/JdkProperty$State;)Z", $PUBLIC, $method(JdkProperty, setValue, bool, $String*, Object$*, $JdkProperty$State*)},
	{}
};

$InnerClassInfo _JdkProperty_InnerClassesInfo_[] = {
	{"jdk.xml.internal.JdkProperty$State", "jdk.xml.internal.JdkProperty", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"jdk.xml.internal.JdkProperty$ImplPropMap", "jdk.xml.internal.JdkProperty", "ImplPropMap", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JdkProperty_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.xml.internal.JdkProperty",
	"java.lang.Object",
	nullptr,
	_JdkProperty_FieldInfo_,
	_JdkProperty_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_JdkProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.xml.internal.JdkProperty$State,jdk.xml.internal.JdkProperty$ImplPropMap"
};

$Object* allocate$JdkProperty($Class* clazz) {
	return $of($alloc(JdkProperty));
}

void JdkProperty::init$($JdkProperty$ImplPropMap* name, Object$* value, $JdkProperty$State* state) {
	$init($JdkProperty$State);
	$set(this, pState, $JdkProperty$State::DEFAULT);
	$set(this, pName, name);
	$set(this, pValue, value);
	$set(this, pState, state);
}

$Object* JdkProperty::getValue() {
	return $of(this->pValue);
}

bool JdkProperty::setValue($String* name, Object$* value, $JdkProperty$State* state) {
	$JdkProperty$State* pState1 = nullptr;
	if ((pState1 = $nc(this->pName)->getState(name)) != nullptr) {
		if ($nc(pState1)->compareTo(static_cast<$Enum*>(this->pState)) >= 0) {
			$set(this, pState, pState1);
			$set(this, pValue, value);
			return true;
		}
	}
	return false;
}

JdkProperty::JdkProperty() {
}

$Class* JdkProperty::load$($String* name, bool initialize) {
	$loadClass(JdkProperty, name, initialize, &_JdkProperty_ClassInfo_, allocate$JdkProperty);
	return class$;
}

$Class* JdkProperty::class$ = nullptr;

		} // internal
	} // xml
} // jdk