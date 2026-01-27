#include <jdk/xml/internal/JdkProperty$ImplPropMap.h>

#include <java/lang/Enum.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkProperty.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef CDATACHUNKSIZE
#undef ENABLEEXTFUNC
#undef ENTITYCOUNT
#undef EXTCLSLOADER
#undef ISSTANDALONE
#undef LEGACY_APIPROPERTY
#undef OVERRIDEPARSER
#undef RESETSYMBOLTABLE
#undef XSLTCISSTANDALONE

using $JdkProperty$ImplPropMapArray = $Array<::jdk::xml::internal::JdkProperty$ImplPropMap>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;

namespace jdk {
	namespace xml {
		namespace internal {

$FieldInfo _JdkProperty$ImplPropMap_FieldInfo_[] = {
	{"ISSTANDALONE", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$ImplPropMap, ISSTANDALONE)},
	{"XSLTCISSTANDALONE", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$ImplPropMap, XSLTCISSTANDALONE)},
	{"CDATACHUNKSIZE", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$ImplPropMap, CDATACHUNKSIZE)},
	{"EXTCLSLOADER", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$ImplPropMap, EXTCLSLOADER)},
	{"ENABLEEXTFUNC", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$ImplPropMap, ENABLEEXTFUNC)},
	{"OVERRIDEPARSER", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$ImplPropMap, OVERRIDEPARSER)},
	{"RESETSYMBOLTABLE", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$ImplPropMap, RESETSYMBOLTABLE)},
	{"ENTITYCOUNT", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$ImplPropMap, ENTITYCOUNT)},
	{"$VALUES", "[Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JdkProperty$ImplPropMap, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkProperty$ImplPropMap, name$)},
	{"qName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkProperty$ImplPropMap, qName$)},
	{"spName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkProperty$ImplPropMap, spName)},
	{"differ", "Z", nullptr, $PRIVATE | $FINAL, $field(JdkProperty$ImplPropMap, differ)},
	{"oldQName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkProperty$ImplPropMap, oldQName)},
	{"oldSPName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkProperty$ImplPropMap, oldSPName)},
	{}
};

$MethodInfo _JdkProperty$ImplPropMap_MethodInfo_[] = {
	{"$values", "()[Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JdkProperty$ImplPropMap, $values, $JdkProperty$ImplPropMapArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(JdkProperty$ImplPropMap, init$, void, $String*, int32_t, $String*, $String*, $String*, bool, $String*, $String*)},
	{"getState", "(Ljava/lang/String;)Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC, $method(JdkProperty$ImplPropMap, getState, $JdkProperty$State*, $String*)},
	{"is", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(JdkProperty$ImplPropMap, is, bool, $String*)},
	{"isNameDiffer", "()Z", nullptr, $PUBLIC, $method(JdkProperty$ImplPropMap, isNameDiffer, bool)},
	{"qName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(JdkProperty$ImplPropMap, qName, $String*)},
	{"qNameOld", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(JdkProperty$ImplPropMap, qNameOld, $String*)},
	{"systemProperty", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(JdkProperty$ImplPropMap, systemProperty, $String*)},
	{"systemPropertyOld", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(JdkProperty$ImplPropMap, systemPropertyOld, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkProperty$ImplPropMap, valueOf, JdkProperty$ImplPropMap*, $String*)},
	{"values", "()[Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkProperty$ImplPropMap, values, $JdkProperty$ImplPropMapArray*)},
	{}
};

$InnerClassInfo _JdkProperty$ImplPropMap_InnerClassesInfo_[] = {
	{"jdk.xml.internal.JdkProperty$ImplPropMap", "jdk.xml.internal.JdkProperty", "ImplPropMap", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JdkProperty$ImplPropMap_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.xml.internal.JdkProperty$ImplPropMap",
	"java.lang.Enum",
	nullptr,
	_JdkProperty$ImplPropMap_FieldInfo_,
	_JdkProperty$ImplPropMap_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/xml/internal/JdkProperty$ImplPropMap;>;",
	nullptr,
	_JdkProperty$ImplPropMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.xml.internal.JdkProperty"
};

$Object* allocate$JdkProperty$ImplPropMap($Class* clazz) {
	return $of($alloc(JdkProperty$ImplPropMap));
}

JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::ISSTANDALONE = nullptr;
JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::XSLTCISSTANDALONE = nullptr;
JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::CDATACHUNKSIZE = nullptr;
JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::EXTCLSLOADER = nullptr;
JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::ENABLEEXTFUNC = nullptr;
JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::OVERRIDEPARSER = nullptr;
JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::RESETSYMBOLTABLE = nullptr;
JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::ENTITYCOUNT = nullptr;
$JdkProperty$ImplPropMapArray* JdkProperty$ImplPropMap::$VALUES = nullptr;

$JdkProperty$ImplPropMapArray* JdkProperty$ImplPropMap::$values() {
	$init(JdkProperty$ImplPropMap);
	return $new($JdkProperty$ImplPropMapArray, {
		JdkProperty$ImplPropMap::ISSTANDALONE,
		JdkProperty$ImplPropMap::XSLTCISSTANDALONE,
		JdkProperty$ImplPropMap::CDATACHUNKSIZE,
		JdkProperty$ImplPropMap::EXTCLSLOADER,
		JdkProperty$ImplPropMap::ENABLEEXTFUNC,
		JdkProperty$ImplPropMap::OVERRIDEPARSER,
		JdkProperty$ImplPropMap::RESETSYMBOLTABLE,
		JdkProperty$ImplPropMap::ENTITYCOUNT
	});
}

$JdkProperty$ImplPropMapArray* JdkProperty$ImplPropMap::values() {
	$init(JdkProperty$ImplPropMap);
	return $cast($JdkProperty$ImplPropMapArray, JdkProperty$ImplPropMap::$VALUES->clone());
}

JdkProperty$ImplPropMap* JdkProperty$ImplPropMap::valueOf($String* name) {
	$init(JdkProperty$ImplPropMap);
	return $cast(JdkProperty$ImplPropMap, $Enum::valueOf(JdkProperty$ImplPropMap::class$, name));
}

void JdkProperty$ImplPropMap::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $String* qName, $String* spName, bool differ, $String* oldQName, $String* oldSPName) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, qName$, qName);
	$set(this, spName, spName);
	this->differ = differ;
	$set(this, oldQName, oldQName);
	$set(this, oldSPName, oldSPName);
}

bool JdkProperty$ImplPropMap::is($String* name) {
	bool var$1 = (this->spName != nullptr && $nc(this->spName)->equals(name));
	bool var$0 = var$1 || (this->differ && $nc(this->qName$)->equals(name));
	return var$0 || (this->oldQName != nullptr && $nc(this->oldQName)->equals(name));
}

bool JdkProperty$ImplPropMap::isNameDiffer() {
	return this->differ;
}

$JdkProperty$State* JdkProperty$ImplPropMap::getState($String* name) {
	bool var$0 = (this->spName != nullptr && $nc(this->spName)->equals(name));
	if (var$0 || (this->spName == nullptr && $nc(this->qName$)->equals(name))) {
		$init($JdkProperty$State);
		return $JdkProperty$State::APIPROPERTY;
	} else {
		bool var$2 = (this->differ && $nc(this->qName$)->equals(name));
		if (var$2 || (this->oldQName != nullptr && $nc(this->oldQName)->equals(name))) {
			$init($JdkProperty$State);
			return $JdkProperty$State::LEGACY_APIPROPERTY;
		}
	}
	return nullptr;
}

$String* JdkProperty$ImplPropMap::qName() {
	return this->qName$;
}

$String* JdkProperty$ImplPropMap::qNameOld() {
	return this->oldQName;
}

$String* JdkProperty$ImplPropMap::systemProperty() {
	return this->spName;
}

$String* JdkProperty$ImplPropMap::systemPropertyOld() {
	return this->oldSPName;
}

void clinit$JdkProperty$ImplPropMap($Class* class$) {
	$assignStatic(JdkProperty$ImplPropMap::ISSTANDALONE, $new(JdkProperty$ImplPropMap, "ISSTANDALONE"_s, 0, "isStandalone"_s, "http://www.oracle.com/xml/jaxp/properties/isStandalone"_s, "jdk.xml.isStandalone"_s, true, nullptr, nullptr));
	$assignStatic(JdkProperty$ImplPropMap::XSLTCISSTANDALONE, $new(JdkProperty$ImplPropMap, "XSLTCISSTANDALONE"_s, 1, "xsltcIsStandalone"_s, "http://www.oracle.com/xml/jaxp/properties/xsltcIsStandalone"_s, "jdk.xml.xsltcIsStandalone"_s, true, "http://www.oracle.com/xml/is-standalone"_s, nullptr));
	$assignStatic(JdkProperty$ImplPropMap::CDATACHUNKSIZE, $new(JdkProperty$ImplPropMap, "CDATACHUNKSIZE"_s, 2, "cdataChunkSize"_s, "jdk.xml.cdataChunkSize"_s, "jdk.xml.cdataChunkSize"_s, false, nullptr, nullptr));
	$assignStatic(JdkProperty$ImplPropMap::EXTCLSLOADER, $new(JdkProperty$ImplPropMap, "EXTCLSLOADER"_s, 3, "extensionClassLoader"_s, "jdk.xml.extensionClassLoader"_s, nullptr, true, "jdk.xml.transform.extensionClassLoader"_s, nullptr));
	$assignStatic(JdkProperty$ImplPropMap::ENABLEEXTFUNC, $new(JdkProperty$ImplPropMap, "ENABLEEXTFUNC"_s, 4, "enableExtensionFunctions"_s, "http://www.oracle.com/xml/jaxp/properties/enableExtensionFunctions"_s, "jdk.xml.enableExtensionFunctions"_s, true, nullptr, "javax.xml.enableExtensionFunctions"_s));
	$assignStatic(JdkProperty$ImplPropMap::OVERRIDEPARSER, $new(JdkProperty$ImplPropMap, "OVERRIDEPARSER"_s, 5, "overrideDefaultParser"_s, "jdk.xml.overrideDefaultParser"_s, "jdk.xml.overrideDefaultParser"_s, false, "http://www.oracle.com/feature/use-service-mechanism"_s, "http://www.oracle.com/feature/use-service-mechanism"_s));
	$assignStatic(JdkProperty$ImplPropMap::RESETSYMBOLTABLE, $new(JdkProperty$ImplPropMap, "RESETSYMBOLTABLE"_s, 6, "resetSymbolTable"_s, "jdk.xml.resetSymbolTable"_s, "jdk.xml.resetSymbolTable"_s, false, nullptr, nullptr));
	$assignStatic(JdkProperty$ImplPropMap::ENTITYCOUNT, $new(JdkProperty$ImplPropMap, "ENTITYCOUNT"_s, 7, "getEntityCountInfo"_s, "jdk.xml.getEntityCountInfo"_s, nullptr, true, "http://www.oracle.com/xml/jaxp/properties/getEntityCountInfo"_s, nullptr));
	$assignStatic(JdkProperty$ImplPropMap::$VALUES, JdkProperty$ImplPropMap::$values());
}

JdkProperty$ImplPropMap::JdkProperty$ImplPropMap() {
}

$Class* JdkProperty$ImplPropMap::load$($String* name, bool initialize) {
	$loadClass(JdkProperty$ImplPropMap, name, initialize, &_JdkProperty$ImplPropMap_ClassInfo_, clinit$JdkProperty$ImplPropMap, allocate$JdkProperty$ImplPropMap);
	return class$;
}

$Class* JdkProperty$ImplPropMap::class$ = nullptr;

		} // internal
	} // xml
} // jdk