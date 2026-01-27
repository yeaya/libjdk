#include <com/sun/org/apache/xalan/internal/utils/FeaturePropertyBase.h>

#include <com/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State.h>
#include <java/lang/Enum.h>
#include <java/lang/NumberFormatException.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT
#undef FEATURE_FALSE
#undef FEATURE_TRUE
#undef JAXPDOTPROPERTIES
#undef SYSTEMPROPERTY

using $FeaturePropertyBase$StateArray = $Array<::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State>;
using $EnumArray = $Array<::java::lang::Enum>;
using $FeaturePropertyBase$State = ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

$FieldInfo _FeaturePropertyBase_FieldInfo_[] = {
	{"values", "[Ljava/lang/String;", nullptr, 0, $field(FeaturePropertyBase, values)},
	{"states", "[Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, 0, $field(FeaturePropertyBase, states)},
	{}
};

$MethodInfo _FeaturePropertyBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FeaturePropertyBase, init$, void)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FeaturePropertyBase, getIndex, int32_t, $String*)},
	{"getIndex", "(Ljava/lang/Class;Ljava/lang/String;)I", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/Class<TE;>;Ljava/lang/String;)I", $PUBLIC, $virtualMethod(FeaturePropertyBase, getIndex, int32_t, $Class*, $String*)},
	{"getSystemProperty", "(Ljava/lang/Enum;Ljava/lang/String;)V", "(Ljava/lang/Enum<*>;Ljava/lang/String;)V", 0, $virtualMethod(FeaturePropertyBase, getSystemProperty, void, $Enum*, $String*)},
	{"getValue", "(Ljava/lang/Enum;)Ljava/lang/String;", "(Ljava/lang/Enum<*>;)Ljava/lang/String;", $PUBLIC, $virtualMethod(FeaturePropertyBase, getValue, $String*, $Enum*)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FeaturePropertyBase, getValue, $String*, $String*)},
	{"getValueAsString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FeaturePropertyBase, getValueAsString, $String*, $String*)},
	{"getValueByIndex", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FeaturePropertyBase, getValueByIndex, $String*, int32_t)},
	{"setValue", "(Ljava/lang/Enum;Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;Ljava/lang/String;)V", "(Ljava/lang/Enum<*>;Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;Ljava/lang/String;)V", $PUBLIC, $virtualMethod(FeaturePropertyBase, setValue, void, $Enum*, $FeaturePropertyBase$State*, $String*)},
	{"setValue", "(ILcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FeaturePropertyBase, setValue, void, int32_t, $FeaturePropertyBase$State*, $String*)},
	{"setValue", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FeaturePropertyBase, setValue, bool, $String*, $FeaturePropertyBase$State*, Object$*)},
	{"setValue", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;Z)Z", nullptr, $PUBLIC, $virtualMethod(FeaturePropertyBase, setValue, bool, $String*, $FeaturePropertyBase$State*, bool)},
	{}
};

$InnerClassInfo _FeaturePropertyBase_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase$State", "com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FeaturePropertyBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase",
	"java.lang.Object",
	nullptr,
	_FeaturePropertyBase_FieldInfo_,
	_FeaturePropertyBase_MethodInfo_,
	nullptr,
	nullptr,
	_FeaturePropertyBase_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase$State"
};

$Object* allocate$FeaturePropertyBase($Class* clazz) {
	return $of($alloc(FeaturePropertyBase));
}

void FeaturePropertyBase::init$() {
	$set(this, values, nullptr);
	$init($FeaturePropertyBase$State);
	$set(this, states, $new($FeaturePropertyBase$StateArray, {
		$FeaturePropertyBase$State::DEFAULT,
		$FeaturePropertyBase$State::DEFAULT
	}));
}

void FeaturePropertyBase::setValue($Enum* property, $FeaturePropertyBase$State* state, $String* value) {
	if ($nc(state)->compareTo(static_cast<$Enum*>($nc(this->states)->get($nc(property)->ordinal()))) >= 0) {
		$nc(this->values)->set($nc(property)->ordinal(), value);
		$nc(this->states)->set(property->ordinal(), state);
	}
}

void FeaturePropertyBase::setValue(int32_t index, $FeaturePropertyBase$State* state, $String* value) {
	if ($nc(state)->compareTo(static_cast<$Enum*>($nc(this->states)->get(index))) >= 0) {
		$nc(this->values)->set(index, value);
		$nc(this->states)->set(index, state);
	}
}

bool FeaturePropertyBase::setValue($String* propertyName, $FeaturePropertyBase$State* state, Object$* value) {
	int32_t index = getIndex(propertyName);
	if (index > -1) {
		setValue(index, state, $cast($String, value));
		return true;
	}
	return false;
}

bool FeaturePropertyBase::setValue($String* propertyName, $FeaturePropertyBase$State* state, bool value) {
	int32_t index = getIndex(propertyName);
	if (index > -1) {
		if (value) {
			$init($JdkConstants);
			setValue(index, state, $JdkConstants::FEATURE_TRUE);
		} else {
			$init($JdkConstants);
			setValue(index, state, $JdkConstants::FEATURE_FALSE);
		}
		return true;
	}
	return false;
}

$String* FeaturePropertyBase::getValue($Enum* property) {
	return $nc(this->values)->get($nc(property)->ordinal());
}

$String* FeaturePropertyBase::getValue($String* property) {
	int32_t index = getIndex(property);
	if (index > -1) {
		return getValueByIndex(index);
	}
	return nullptr;
}

$String* FeaturePropertyBase::getValueAsString($String* propertyName) {
	int32_t index = getIndex(propertyName);
	if (index > -1) {
		return getValueByIndex(index);
	}
	return nullptr;
}

$String* FeaturePropertyBase::getValueByIndex(int32_t index) {
	return $nc(this->values)->get(index);
}

int32_t FeaturePropertyBase::getIndex($Class* property, $String* propertyName) {
	$useLocalCurrentObjectStackCache();
	{
		$var($EnumArray, arr$, $fcast($EnumArray, $nc(property)->getEnumConstants()));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Enum, enumItem, arr$->get(i$));
			{
				if ($nc($($nc(enumItem)->toString()))->equals(propertyName)) {
					return enumItem->ordinal();
				}
			}
		}
	}
	return -1;
}

void FeaturePropertyBase::getSystemProperty($Enum* property, $String* systemProperty) {
	try {
		$var($String, value, $SecuritySupport::getSystemProperty(systemProperty));
		if (value != nullptr) {
			$nc(this->values)->set($nc(property)->ordinal(), value);
			$init($FeaturePropertyBase$State);
			$nc(this->states)->set(property->ordinal(), $FeaturePropertyBase$State::SYSTEMPROPERTY);
			return;
		}
		$assign(value, $SecuritySupport::readJAXPProperty(systemProperty));
		if (value != nullptr) {
			$nc(this->values)->set($nc(property)->ordinal(), value);
			$init($FeaturePropertyBase$State);
			$nc(this->states)->set(property->ordinal(), $FeaturePropertyBase$State::JAXPDOTPROPERTIES);
		}
	} catch ($NumberFormatException& e) {
	}
}

FeaturePropertyBase::FeaturePropertyBase() {
}

$Class* FeaturePropertyBase::load$($String* name, bool initialize) {
	$loadClass(FeaturePropertyBase, name, initialize, &_FeaturePropertyBase_ClassInfo_, allocate$FeaturePropertyBase);
	return class$;
}

$Class* FeaturePropertyBase::class$ = nullptr;

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com