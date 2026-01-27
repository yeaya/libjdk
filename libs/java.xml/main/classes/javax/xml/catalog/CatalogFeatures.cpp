#include <javax/xml/catalog/CatalogFeatures.h>

#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <javax/xml/catalog/CatalogFeatures$Builder.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures$State.h>
#include <javax/xml/catalog/Util.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef DEFAULT
#undef DEFER_FALSE
#undef DEFER_TRUE
#undef JAXPDOTPROPERTIES
#undef PREFER_PUBLIC
#undef PREFER_SYSTEM
#undef RESOLVE_CONTINUE
#undef RESOLVE_IGNORE
#undef RESOLVE_STRICT
#undef SYSTEMPROPERTY

using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $CatalogFeatures$StateArray = $Array<::javax::xml::catalog::CatalogFeatures$State>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;
using $CatalogFeatures$Builder = ::javax::xml::catalog::CatalogFeatures$Builder;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $CatalogFeatures$State = ::javax::xml::catalog::CatalogFeatures$State;
using $Util = ::javax::xml::catalog::Util;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogFeatures$$Lambda$lambda$setProperties$0 : public $Consumer {
	$class(CatalogFeatures$$Lambda$lambda$setProperties$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(CatalogFeatures* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* entry) override {
		$nc(inst$)->lambda$setProperties$0($cast($Map$Entry, entry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CatalogFeatures$$Lambda$lambda$setProperties$0>());
	}
	CatalogFeatures* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CatalogFeatures$$Lambda$lambda$setProperties$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CatalogFeatures$$Lambda$lambda$setProperties$0, inst$)},
	{}
};
$MethodInfo CatalogFeatures$$Lambda$lambda$setProperties$0::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/catalog/CatalogFeatures;)V", nullptr, $PUBLIC, $method(CatalogFeatures$$Lambda$lambda$setProperties$0, init$, void, CatalogFeatures*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CatalogFeatures$$Lambda$lambda$setProperties$0, accept, void, Object$*)},
	{}
};
$ClassInfo CatalogFeatures$$Lambda$lambda$setProperties$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.catalog.CatalogFeatures$$Lambda$lambda$setProperties$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* CatalogFeatures$$Lambda$lambda$setProperties$0::load$($String* name, bool initialize) {
	$loadClass(CatalogFeatures$$Lambda$lambda$setProperties$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CatalogFeatures$$Lambda$lambda$setProperties$0::class$ = nullptr;

$FieldInfo _CatalogFeatures_FieldInfo_[] = {
	{"CATALOG_FILES", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, CATALOG_FILES)},
	{"CATALOG_PREFER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, CATALOG_PREFER)},
	{"CATALOG_DEFER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, CATALOG_DEFER)},
	{"CATALOG_RESOLVE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, CATALOG_RESOLVE)},
	{"PREFER_SYSTEM", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, PREFER_SYSTEM)},
	{"PREFER_PUBLIC", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, PREFER_PUBLIC)},
	{"DEFER_TRUE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, DEFER_TRUE)},
	{"DEFER_FALSE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, DEFER_FALSE)},
	{"RESOLVE_STRICT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, RESOLVE_STRICT)},
	{"RESOLVE_CONTINUE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, RESOLVE_CONTINUE)},
	{"RESOLVE_IGNORE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogFeatures, RESOLVE_IGNORE)},
	{"values", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(CatalogFeatures, values)},
	{"states", "[Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PRIVATE, $field(CatalogFeatures, states)},
	{}
};

$MethodInfo _CatalogFeatures_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CatalogFeatures, init$, void)},
	{"<init>", "(Ljavax/xml/catalog/CatalogFeatures$Builder;)V", nullptr, 0, $method(CatalogFeatures, init$, void, $CatalogFeatures$Builder*)},
	{"builder", "()Ljavax/xml/catalog/CatalogFeatures$Builder;", nullptr, $PUBLIC | $STATIC, $staticMethod(CatalogFeatures, builder, $CatalogFeatures$Builder*)},
	{"defaults", "()Ljavax/xml/catalog/CatalogFeatures;", nullptr, $PUBLIC | $STATIC, $staticMethod(CatalogFeatures, defaults, CatalogFeatures*)},
	{"get", "(Ljavax/xml/catalog/CatalogFeatures$Feature;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CatalogFeatures, get, $String*, $CatalogFeatures$Feature*)},
	{"getSystemProperty", "(Ljavax/xml/catalog/CatalogFeatures$Feature;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(CatalogFeatures, getSystemProperty, bool, $CatalogFeatures$Feature*, $String*)},
	{"init", "()V", nullptr, $PRIVATE, $method(CatalogFeatures, init, void)},
	{"lambda$setProperties$0", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(CatalogFeatures, lambda$setProperties$0, void, $Map$Entry*)},
	{"readSystemProperties", "()V", nullptr, $PRIVATE, $method(CatalogFeatures, readSystemProperties, void)},
	{"setProperties", "(Ljavax/xml/catalog/CatalogFeatures$Builder;)V", nullptr, $PRIVATE, $method(CatalogFeatures, setProperties, void, $CatalogFeatures$Builder*)},
	{"setProperty", "(Ljavax/xml/catalog/CatalogFeatures$Feature;Ljavax/xml/catalog/CatalogFeatures$State;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(CatalogFeatures, setProperty, void, $CatalogFeatures$Feature*, $CatalogFeatures$State*, $String*)},
	{}
};

$InnerClassInfo _CatalogFeatures_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogFeatures$Builder", "javax.xml.catalog.CatalogFeatures", "Builder", $PUBLIC | $STATIC},
	{"javax.xml.catalog.CatalogFeatures$State", "javax.xml.catalog.CatalogFeatures", "State", $STATIC | $FINAL | $ENUM},
	{"javax.xml.catalog.CatalogFeatures$Feature", "javax.xml.catalog.CatalogFeatures", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CatalogFeatures_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.catalog.CatalogFeatures",
	"java.lang.Object",
	nullptr,
	_CatalogFeatures_FieldInfo_,
	_CatalogFeatures_MethodInfo_,
	nullptr,
	nullptr,
	_CatalogFeatures_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogFeatures$Builder,javax.xml.catalog.CatalogFeatures$State,javax.xml.catalog.CatalogFeatures$Feature"
};

$Object* allocate$CatalogFeatures($Class* clazz) {
	return $of($alloc(CatalogFeatures));
}

$String* CatalogFeatures::CATALOG_FILES = nullptr;
$String* CatalogFeatures::CATALOG_PREFER = nullptr;
$String* CatalogFeatures::CATALOG_DEFER = nullptr;
$String* CatalogFeatures::CATALOG_RESOLVE = nullptr;
$String* CatalogFeatures::PREFER_SYSTEM = nullptr;
$String* CatalogFeatures::PREFER_PUBLIC = nullptr;
$String* CatalogFeatures::DEFER_TRUE = nullptr;
$String* CatalogFeatures::DEFER_FALSE = nullptr;
$String* CatalogFeatures::RESOLVE_STRICT = nullptr;
$String* CatalogFeatures::RESOLVE_CONTINUE = nullptr;
$String* CatalogFeatures::RESOLVE_IGNORE = nullptr;

void CatalogFeatures::init$() {
}

CatalogFeatures* CatalogFeatures::defaults() {
	$init(CatalogFeatures);
	return $nc($(CatalogFeatures::builder()))->build();
}

void CatalogFeatures::init$($CatalogFeatures$Builder* builder) {
	init();
	setProperties(builder);
}

$String* CatalogFeatures::get($CatalogFeatures$Feature* cf) {
	return $nc(this->values)->get($nc(cf)->ordinal());
}

void CatalogFeatures::init() {
	$useLocalCurrentObjectStackCache();
	$set(this, values, $new($StringArray, $($CatalogFeatures$Feature::values())->length));
	$set(this, states, $new($CatalogFeatures$StateArray, $($CatalogFeatures$Feature::values())->length));
	{
		$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$CatalogFeatures$Feature* cf = arr$->get(i$);
			{
				$init($CatalogFeatures$State);
				setProperty(cf, $CatalogFeatures$State::DEFAULT, $($nc(cf)->defaultValue()));
			}
		}
	}
	readSystemProperties();
}

void CatalogFeatures::setProperties($CatalogFeatures$Builder* builder) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($nc($nc(builder)->values)->entrySet()))->stream()))->forEach(static_cast<$Consumer*>($$new(CatalogFeatures$$Lambda$lambda$setProperties$0, this)));
}

void CatalogFeatures::setProperty($CatalogFeatures$Feature* feature, $CatalogFeatures$State* state, $String* value) {
	int32_t index = $nc(feature)->ordinal();
	if (value != nullptr && value->length() != 0) {
		$init($CatalogFeatures$State);
		if (state != $CatalogFeatures$State::APIPROPERTY) {
			$Util::validateFeatureInput(feature, value);
		}
		if ($nc(this->states)->get(index) == nullptr || $nc(state)->compareTo(static_cast<$Enum*>($nc(this->states)->get(index))) >= 0) {
			$nc(this->values)->set(index, value);
			$nc(this->states)->set(index, state);
		}
	}
}

void CatalogFeatures::readSystemProperties() {
	$useLocalCurrentObjectStackCache();
	{
		$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$CatalogFeatures$Feature* cf = arr$->get(i$);
			{
				getSystemProperty(cf, $($nc(cf)->getPropertyName()));
			}
		}
	}
}

bool CatalogFeatures::getSystemProperty($CatalogFeatures$Feature* cf, $String* sysPropertyName) {
	if ($nc(cf)->hasSystemProperty()) {
		$var($String, value, $SecuritySupport::getSystemProperty(sysPropertyName));
		if (value != nullptr && !value->isEmpty()) {
			$init($CatalogFeatures$State);
			setProperty(cf, $CatalogFeatures$State::SYSTEMPROPERTY, value);
			return true;
		}
		$assign(value, $SecuritySupport::readJAXPProperty(sysPropertyName));
		if (value != nullptr && !value->isEmpty()) {
			$init($CatalogFeatures$State);
			setProperty(cf, $CatalogFeatures$State::JAXPDOTPROPERTIES, value);
			return true;
		}
	}
	return false;
}

$CatalogFeatures$Builder* CatalogFeatures::builder() {
	$init(CatalogFeatures);
	return $new($CatalogFeatures$Builder);
}

void CatalogFeatures::lambda$setProperties$0($Map$Entry* entry) {
	$useLocalCurrentObjectStackCache();
	$var($CatalogFeatures$Feature, var$0, $cast($CatalogFeatures$Feature, $nc(entry)->getKey()));
	$init($CatalogFeatures$State);
	$var($CatalogFeatures$State, var$1, $CatalogFeatures$State::APIPROPERTY);
	setProperty(var$0, var$1, $cast($String, $(entry->getValue())));
}

CatalogFeatures::CatalogFeatures() {
}

void clinit$CatalogFeatures($Class* class$) {
	$assignStatic(CatalogFeatures::CATALOG_FILES, "javax.xml.catalog.files"_s);
	$assignStatic(CatalogFeatures::CATALOG_PREFER, "javax.xml.catalog.prefer"_s);
	$assignStatic(CatalogFeatures::CATALOG_DEFER, "javax.xml.catalog.defer"_s);
	$assignStatic(CatalogFeatures::CATALOG_RESOLVE, "javax.xml.catalog.resolve"_s);
	$assignStatic(CatalogFeatures::PREFER_SYSTEM, "system"_s);
	$assignStatic(CatalogFeatures::PREFER_PUBLIC, "public"_s);
	$assignStatic(CatalogFeatures::DEFER_TRUE, "true"_s);
	$assignStatic(CatalogFeatures::DEFER_FALSE, "false"_s);
	$assignStatic(CatalogFeatures::RESOLVE_STRICT, "strict"_s);
	$assignStatic(CatalogFeatures::RESOLVE_CONTINUE, "continue"_s);
	$assignStatic(CatalogFeatures::RESOLVE_IGNORE, "ignore"_s);
}

$Class* CatalogFeatures::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CatalogFeatures$$Lambda$lambda$setProperties$0::classInfo$.name)) {
			return CatalogFeatures$$Lambda$lambda$setProperties$0::load$(name, initialize);
		}
	}
	$loadClass(CatalogFeatures, name, initialize, &_CatalogFeatures_ClassInfo_, clinit$CatalogFeatures, allocate$CatalogFeatures);
	return class$;
}

$Class* CatalogFeatures::class$ = nullptr;

		} // catalog
	} // xml
} // javax