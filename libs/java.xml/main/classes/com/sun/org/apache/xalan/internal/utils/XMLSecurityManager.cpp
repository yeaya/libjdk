#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager.h>

#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager$NameMap.h>
#include <java/lang/Enum.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$ImplPropMap.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef DEFAULT
#undef ENTITYCOUNT
#undef FSP
#undef JAXPDOTPROPERTIES
#undef JDK_YES
#undef SYSTEMPROPERTY

using $XMLSecurityManager$LimitArray = $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit>;
using $XMLSecurityManager$NameMapArray = $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap>;
using $JdkProperty$StateArray = $Array<::jdk::xml::internal::JdkProperty$State>;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit;
using $XMLSecurityManager$NameMap = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$ImplPropMap = ::jdk::xml::internal::JdkProperty$ImplPropMap;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

$FieldInfo _XMLSecurityManager_FieldInfo_[] = {
	{"values", "[I", nullptr, $PRIVATE | $FINAL, $field(XMLSecurityManager, values)},
	{"states", "[Ljdk/xml/internal/JdkProperty$State;", nullptr, $PRIVATE, $field(XMLSecurityManager, states)},
	{"isSet", "[Z", nullptr, $PRIVATE, $field(XMLSecurityManager, isSet$)},
	{"indexEntityCountInfo", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSecurityManager, indexEntityCountInfo)},
	{"printEntityCountInfo", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSecurityManager, printEntityCountInfo$)},
	{"printedWarnings", "Ljava/util/concurrent/CopyOnWriteArrayList;", "Ljava/util/concurrent/CopyOnWriteArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XMLSecurityManager, printedWarnings)},
	{}
};

$MethodInfo _XMLSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSecurityManager, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(XMLSecurityManager, init$, void, bool)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $method(XMLSecurityManager, getIndex, int32_t, $String*)},
	{"getLimit", "(Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit;)I", nullptr, $PUBLIC, $method(XMLSecurityManager, getLimit, int32_t, $XMLSecurityManager$Limit*)},
	{"getLimitAsString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityManager, getLimitAsString, $String*, $String*)},
	{"getLimitByIndex", "(I)I", nullptr, $PUBLIC, $method(XMLSecurityManager, getLimitByIndex, int32_t, int32_t)},
	{"getLimitValueAsString", "(Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit;)Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityManager, getLimitValueAsString, $String*, $XMLSecurityManager$Limit*)},
	{"getLimitValueByIndex", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityManager, getLimitValueByIndex, $String*, int32_t)},
	{"getState", "(Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit;)Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC, $method(XMLSecurityManager, getState, $JdkProperty$State*, $XMLSecurityManager$Limit*)},
	{"getStateLiteral", "(Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit;)Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityManager, getStateLiteral, $String*, $XMLSecurityManager$Limit*)},
	{"getSystemProperty", "(Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(XMLSecurityManager, getSystemProperty, bool, $XMLSecurityManager$Limit*, $String*)},
	{"isSet", "(I)Z", nullptr, $PUBLIC, $method(XMLSecurityManager, isSet, bool, int32_t)},
	{"printEntityCountInfo", "()Z", nullptr, $PUBLIC, $method(XMLSecurityManager, printEntityCountInfo, bool)},
	{"printWarning", "(Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/SAXException;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityManager, printWarning, void, $String*, $String*, $SAXException*)},
	{"readSystemProperties", "()V", nullptr, $PRIVATE, $method(XMLSecurityManager, readSystemProperties, void)},
	{"setLimit", "(Ljava/lang/String;Ljdk/xml/internal/JdkProperty$State;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $method(XMLSecurityManager, setLimit, bool, $String*, $JdkProperty$State*, Object$*)},
	{"setLimit", "(Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit;Ljdk/xml/internal/JdkProperty$State;I)V", nullptr, $PUBLIC, $method(XMLSecurityManager, setLimit, void, $XMLSecurityManager$Limit*, $JdkProperty$State*, int32_t)},
	{"setLimit", "(ILjdk/xml/internal/JdkProperty$State;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(XMLSecurityManager, setLimit, void, int32_t, $JdkProperty$State*, Object$*)},
	{"setLimit", "(ILjdk/xml/internal/JdkProperty$State;I)V", nullptr, $PUBLIC, $method(XMLSecurityManager, setLimit, void, int32_t, $JdkProperty$State*, int32_t)},
	{"setSecureProcessing", "(Z)V", nullptr, $PUBLIC, $method(XMLSecurityManager, setSecureProcessing, void, bool)},
	{}
};

$InnerClassInfo _XMLSecurityManager_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.utils.XMLSecurityManager$NameMap", "com.sun.org.apache.xalan.internal.utils.XMLSecurityManager", "NameMap", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.org.apache.xalan.internal.utils.XMLSecurityManager$Limit", "com.sun.org.apache.xalan.internal.utils.XMLSecurityManager", "Limit", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLSecurityManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.utils.XMLSecurityManager",
	"java.lang.Object",
	nullptr,
	_XMLSecurityManager_FieldInfo_,
	_XMLSecurityManager_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSecurityManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.utils.XMLSecurityManager$NameMap,com.sun.org.apache.xalan.internal.utils.XMLSecurityManager$Limit"
};

$Object* allocate$XMLSecurityManager($Class* clazz) {
	return $of($alloc(XMLSecurityManager));
}

$CopyOnWriteArrayList* XMLSecurityManager::printedWarnings = nullptr;

void XMLSecurityManager::init$() {
	XMLSecurityManager::init$(false);
}

void XMLSecurityManager::init$(bool secureProcessing) {
	$useLocalCurrentObjectStackCache();
	$set(this, printEntityCountInfo$, ""_s);
	$set(this, values, $new($ints, $($XMLSecurityManager$Limit::values())->length));
	$set(this, states, $new($JdkProperty$StateArray, $($XMLSecurityManager$Limit::values())->length));
	$set(this, isSet$, $new($booleans, $($XMLSecurityManager$Limit::values())->length));
	{
		$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$XMLSecurityManager$Limit* limit = arr$->get(i$);
			{
				if (secureProcessing) {
					int32_t var$0 = $nc(limit)->ordinal();
					$nc(this->values)->set(var$0, limit->secureValue());
					$init($JdkProperty$State);
					$nc(this->states)->set(limit->ordinal(), $JdkProperty$State::FSP);
				} else {
					int32_t var$1 = $nc(limit)->ordinal();
					$nc(this->values)->set(var$1, limit->defaultValue());
					$init($JdkProperty$State);
					$nc(this->states)->set(limit->ordinal(), $JdkProperty$State::DEFAULT);
				}
			}
		}
	}
	readSystemProperties();
}

void XMLSecurityManager::setSecureProcessing(bool secure) {
	$useLocalCurrentObjectStackCache();
	{
		$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$XMLSecurityManager$Limit* limit = arr$->get(i$);
			{
				if (secure) {
					int32_t var$0 = $nc(limit)->ordinal();
					$init($JdkProperty$State);
					$var($JdkProperty$State, var$1, $JdkProperty$State::FSP);
					setLimit(var$0, var$1, limit->secureValue());
				} else {
					int32_t var$2 = $nc(limit)->ordinal();
					$init($JdkProperty$State);
					$var($JdkProperty$State, var$3, $JdkProperty$State::FSP);
					setLimit(var$2, var$3, limit->defaultValue());
				}
			}
		}
	}
}

bool XMLSecurityManager::setLimit($String* propertyName, $JdkProperty$State* state, Object$* value) {
	int32_t index = getIndex(propertyName);
	if (index > -1) {
		$JdkProperty$State* pState = state;
		$init($JdkProperty$State);
		if (index != XMLSecurityManager::indexEntityCountInfo && state == $JdkProperty$State::APIPROPERTY) {
			pState = $nc(($($XMLSecurityManager$Limit::values())->get(index)))->getState(propertyName);
		}
		setLimit(index, pState, value);
		return true;
	}
	return false;
}

void XMLSecurityManager::setLimit($XMLSecurityManager$Limit* limit, $JdkProperty$State* state, int32_t value) {
	setLimit($nc(limit)->ordinal(), state, value);
}

void XMLSecurityManager::setLimit(int32_t index, $JdkProperty$State* state, Object$* value) {
	if (index == XMLSecurityManager::indexEntityCountInfo) {
		$set(this, printEntityCountInfo$, $cast($String, value));
	} else {
		int32_t temp = 0;
		if ($instanceOf($Integer, value)) {
			temp = $nc(($cast($Integer, value)))->intValue();
		} else {
			temp = $Integer::parseInt($cast($String, value));
			if (temp < 0) {
				temp = 0;
			}
		}
		setLimit(index, state, temp);
	}
}

void XMLSecurityManager::setLimit(int32_t index, $JdkProperty$State* state, int32_t value) {
	if (index == XMLSecurityManager::indexEntityCountInfo) {
		$init($JdkConstants);
		$set(this, printEntityCountInfo$, $JdkConstants::JDK_YES);
	} else if ($nc(state)->compareTo(static_cast<$Enum*>($nc(this->states)->get(index))) >= 0) {
		$nc(this->values)->set(index, value);
		$nc(this->states)->set(index, state);
		$nc(this->isSet$)->set(index, true);
	}
}

$String* XMLSecurityManager::getLimitAsString($String* propertyName) {
	int32_t index = getIndex(propertyName);
	if (index > -1) {
		return getLimitValueByIndex(index);
	}
	return nullptr;
}

$String* XMLSecurityManager::getLimitValueAsString($XMLSecurityManager$Limit* limit) {
	return $Integer::toString($nc(this->values)->get($nc(limit)->ordinal()));
}

int32_t XMLSecurityManager::getLimit($XMLSecurityManager$Limit* limit) {
	return $nc(this->values)->get($nc(limit)->ordinal());
}

int32_t XMLSecurityManager::getLimitByIndex(int32_t index) {
	return $nc(this->values)->get(index);
}

$String* XMLSecurityManager::getLimitValueByIndex(int32_t index) {
	if (index == XMLSecurityManager::indexEntityCountInfo) {
		return this->printEntityCountInfo$;
	}
	return $Integer::toString($nc(this->values)->get(index));
}

$JdkProperty$State* XMLSecurityManager::getState($XMLSecurityManager$Limit* limit) {
	return $nc(this->states)->get($nc(limit)->ordinal());
}

$String* XMLSecurityManager::getStateLiteral($XMLSecurityManager$Limit* limit) {
	return $nc($nc(this->states)->get($nc(limit)->ordinal()))->literal();
}

int32_t XMLSecurityManager::getIndex($String* propertyName) {
	{
		$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$XMLSecurityManager$Limit* limit = arr$->get(i$);
			{
				if ($nc(limit)->is(propertyName)) {
					return limit->ordinal();
				}
			}
		}
	}
	$init($JdkProperty$ImplPropMap);
	if ($JdkProperty$ImplPropMap::ENTITYCOUNT->is(propertyName)) {
		return XMLSecurityManager::indexEntityCountInfo;
	}
	return -1;
}

bool XMLSecurityManager::isSet(int32_t index) {
	return $nc(this->isSet$)->get(index);
}

bool XMLSecurityManager::printEntityCountInfo() {
	$init($JdkConstants);
	return $nc(this->printEntityCountInfo$)->equals($JdkConstants::JDK_YES);
}

void XMLSecurityManager::readSystemProperties() {
	$useLocalCurrentObjectStackCache();
	{
		$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$XMLSecurityManager$Limit* limit = arr$->get(i$);
			{
				if (!getSystemProperty(limit, $($nc(limit)->systemProperty()))) {
					{
						$var($XMLSecurityManager$NameMapArray, arr$, $XMLSecurityManager$NameMap::values());
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$XMLSecurityManager$NameMap* nameMap = arr$->get(i$);
							{
								$var($String, oldName, $nc(nameMap)->getOldName($($nc(limit)->systemProperty())));
								if (oldName != nullptr) {
									getSystemProperty(limit, oldName);
								}
							}
						}
					}
				}
			}
		}
	}
}

void XMLSecurityManager::printWarning($String* parserClassName, $String* propertyName, $SAXException* exception) {
	$init(XMLSecurityManager);
	$useLocalCurrentObjectStackCache();
	$var($String, key, $str({parserClassName, ":"_s, propertyName}));
	if ($nc(XMLSecurityManager::printedWarnings)->addIfAbsent(key)) {
		$nc($System::err)->println($$str({"Warning: "_s, parserClassName, ": "_s, $($nc(exception)->getMessage())}));
	}
}

bool XMLSecurityManager::getSystemProperty($XMLSecurityManager$Limit* limit, $String* sysPropertyName) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, value, $SecuritySupport::getSystemProperty(sysPropertyName));
		if (value != nullptr && !value->equals(""_s)) {
			int32_t var$0 = $nc(limit)->ordinal();
			$nc(this->values)->set(var$0, $Integer::parseInt(value));
			$init($JdkProperty$State);
			$nc(this->states)->set(limit->ordinal(), $JdkProperty$State::SYSTEMPROPERTY);
			return true;
		}
		$assign(value, $SecuritySupport::readJAXPProperty(sysPropertyName));
		if (value != nullptr && !value->equals(""_s)) {
			int32_t var$1 = $nc(limit)->ordinal();
			$nc(this->values)->set(var$1, $Integer::parseInt(value));
			$init($JdkProperty$State);
			$nc(this->states)->set(limit->ordinal(), $JdkProperty$State::JAXPDOTPROPERTIES);
			return true;
		}
	} catch ($NumberFormatException& e) {
		$throwNew($NumberFormatException, $$str({"Invalid setting for system property: "_s, $($nc(limit)->systemProperty())}));
	}
	return false;
}

void clinit$XMLSecurityManager($Class* class$) {
	$assignStatic(XMLSecurityManager::printedWarnings, $new($CopyOnWriteArrayList));
}

XMLSecurityManager::XMLSecurityManager() {
}

$Class* XMLSecurityManager::load$($String* name, bool initialize) {
	$loadClass(XMLSecurityManager, name, initialize, &_XMLSecurityManager_ClassInfo_, clinit$XMLSecurityManager, allocate$XMLSecurityManager);
	return class$;
}

$Class* XMLSecurityManager::class$ = nullptr;

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com