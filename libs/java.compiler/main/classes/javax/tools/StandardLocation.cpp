#include <javax/tools/StandardLocation.h>

#include <java/lang/Enum.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardLocation$1.h>
#include <javax/tools/StandardLocation$2.h>
#include <jcpp.h>

#undef ANNOTATION_PROCESSOR_MODULE_PATH
#undef ANNOTATION_PROCESSOR_PATH
#undef CLASS_OUTPUT
#undef CLASS_PATH
#undef MODULE_PATH
#undef MODULE_SOURCE_PATH
#undef NATIVE_HEADER_OUTPUT
#undef PATCH_MODULE_PATH
#undef PLATFORM_CLASS_PATH
#undef SOURCE_OUTPUT
#undef SOURCE_PATH
#undef SYSTEM_MODULES
#undef UPGRADE_MODULE_PATH

using $StandardLocationArray = $Array<::javax::tools::StandardLocation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation$1 = ::javax::tools::StandardLocation$1;
using $StandardLocation$2 = ::javax::tools::StandardLocation$2;

namespace javax {
	namespace tools {

$FieldInfo _StandardLocation_FieldInfo_[] = {
	{"CLASS_OUTPUT", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, CLASS_OUTPUT)},
	{"SOURCE_OUTPUT", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, SOURCE_OUTPUT)},
	{"CLASS_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, CLASS_PATH)},
	{"SOURCE_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, SOURCE_PATH)},
	{"ANNOTATION_PROCESSOR_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, ANNOTATION_PROCESSOR_PATH)},
	{"ANNOTATION_PROCESSOR_MODULE_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, ANNOTATION_PROCESSOR_MODULE_PATH)},
	{"PLATFORM_CLASS_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, PLATFORM_CLASS_PATH)},
	{"NATIVE_HEADER_OUTPUT", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, NATIVE_HEADER_OUTPUT)},
	{"MODULE_SOURCE_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, MODULE_SOURCE_PATH)},
	{"UPGRADE_MODULE_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, UPGRADE_MODULE_PATH)},
	{"SYSTEM_MODULES", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, SYSTEM_MODULES)},
	{"MODULE_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, MODULE_PATH)},
	{"PATCH_MODULE_PATH", "Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardLocation, PATCH_MODULE_PATH)},
	{"$VALUES", "[Ljavax/tools/StandardLocation;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StandardLocation, $VALUES)},
	{"locations", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/String;Ljavax/tools/JavaFileManager$Location;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StandardLocation, locations)},
	{}
};

$MethodInfo _StandardLocation_MethodInfo_[] = {
	{"$values", "()[Ljavax/tools/StandardLocation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(StandardLocation, $values, $StandardLocationArray*)},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(StandardLocation, init$, void, $String*, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StandardLocation, getName, $String*)},
	{"isModuleOrientedLocation", "()Z", nullptr, $PUBLIC, $virtualMethod(StandardLocation, isModuleOrientedLocation, bool)},
	{"isOutputLocation", "()Z", nullptr, $PUBLIC, $virtualMethod(StandardLocation, isOutputLocation, bool)},
	{"locationFor", "(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC | $STATIC, $staticMethod(StandardLocation, locationFor, $JavaFileManager$Location*, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC, $staticMethod(StandardLocation, valueOf, StandardLocation*, $String*)},
	{"values", "()[Ljavax/tools/StandardLocation;", nullptr, $PUBLIC | $STATIC, $staticMethod(StandardLocation, values, $StandardLocationArray*)},
	{}
};

$InnerClassInfo _StandardLocation_InnerClassesInfo_[] = {
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.tools.StandardLocation$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.tools.StandardLocation$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StandardLocation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.tools.StandardLocation",
	"java.lang.Enum",
	"javax.tools.JavaFileManager$Location",
	_StandardLocation_FieldInfo_,
	_StandardLocation_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/tools/StandardLocation;>;Ljavax/tools/JavaFileManager$Location;",
	nullptr,
	_StandardLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.tools.StandardLocation$2,javax.tools.StandardLocation$1"
};

$Object* allocate$StandardLocation($Class* clazz) {
	return $of($alloc(StandardLocation));
}

$String* StandardLocation::toString() {
	 return this->$Enum::toString();
}

bool StandardLocation::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t StandardLocation::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* StandardLocation::clone() {
	 return this->$Enum::clone();
}

void StandardLocation::finalize() {
	this->$Enum::finalize();
}

StandardLocation* StandardLocation::CLASS_OUTPUT = nullptr;
StandardLocation* StandardLocation::SOURCE_OUTPUT = nullptr;
StandardLocation* StandardLocation::CLASS_PATH = nullptr;
StandardLocation* StandardLocation::SOURCE_PATH = nullptr;
StandardLocation* StandardLocation::ANNOTATION_PROCESSOR_PATH = nullptr;
StandardLocation* StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH = nullptr;
StandardLocation* StandardLocation::PLATFORM_CLASS_PATH = nullptr;
StandardLocation* StandardLocation::NATIVE_HEADER_OUTPUT = nullptr;
StandardLocation* StandardLocation::MODULE_SOURCE_PATH = nullptr;
StandardLocation* StandardLocation::UPGRADE_MODULE_PATH = nullptr;
StandardLocation* StandardLocation::SYSTEM_MODULES = nullptr;
StandardLocation* StandardLocation::MODULE_PATH = nullptr;
StandardLocation* StandardLocation::PATCH_MODULE_PATH = nullptr;
$StandardLocationArray* StandardLocation::$VALUES = nullptr;
$ConcurrentMap* StandardLocation::locations = nullptr;

$StandardLocationArray* StandardLocation::$values() {
	$init(StandardLocation);
	return $new($StandardLocationArray, {
		StandardLocation::CLASS_OUTPUT,
		StandardLocation::SOURCE_OUTPUT,
		StandardLocation::CLASS_PATH,
		StandardLocation::SOURCE_PATH,
		StandardLocation::ANNOTATION_PROCESSOR_PATH,
		StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH,
		StandardLocation::PLATFORM_CLASS_PATH,
		StandardLocation::NATIVE_HEADER_OUTPUT,
		StandardLocation::MODULE_SOURCE_PATH,
		StandardLocation::UPGRADE_MODULE_PATH,
		StandardLocation::SYSTEM_MODULES,
		StandardLocation::MODULE_PATH,
		StandardLocation::PATCH_MODULE_PATH
	});
}

$StandardLocationArray* StandardLocation::values() {
	$init(StandardLocation);
	return $cast($StandardLocationArray, StandardLocation::$VALUES->clone());
}

StandardLocation* StandardLocation::valueOf($String* name) {
	$init(StandardLocation);
	return $cast(StandardLocation, $Enum::valueOf(StandardLocation::class$, name));
}

void StandardLocation::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$JavaFileManager$Location* StandardLocation::locationFor($String* name) {
	$init(StandardLocation);
	$useLocalCurrentObjectStackCache();
	if ($nc(StandardLocation::locations)->isEmpty()) {
		{
			$var($StandardLocationArray, arr$, values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($JavaFileManager$Location, location, arr$->get(i$));
				$nc(StandardLocation::locations)->putIfAbsent($($nc(location)->getName()), location);
			}
		}
	}
	$nc($of(name))->getClass();
	$nc(StandardLocation::locations)->putIfAbsent(name, $$new($StandardLocation$1, name));
	return $cast($JavaFileManager$Location, $nc(StandardLocation::locations)->get(name));
}

$String* StandardLocation::getName() {
	return name();
}

bool StandardLocation::isOutputLocation() {
	$init($StandardLocation$2);
	switch ($nc($StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->get((this)->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

bool StandardLocation::isModuleOrientedLocation() {
	$init($StandardLocation$2);
	switch ($nc($StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->get((this)->ordinal())) {
	case 4:
		{}
	case 5:
		{}
	case 6:
		{}
	case 7:
		{}
	case 8:
		{}
	case 9:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void clinit$StandardLocation($Class* class$) {
	$assignStatic(StandardLocation::CLASS_OUTPUT, $new(StandardLocation, "CLASS_OUTPUT"_s, 0));
	$assignStatic(StandardLocation::SOURCE_OUTPUT, $new(StandardLocation, "SOURCE_OUTPUT"_s, 1));
	$assignStatic(StandardLocation::CLASS_PATH, $new(StandardLocation, "CLASS_PATH"_s, 2));
	$assignStatic(StandardLocation::SOURCE_PATH, $new(StandardLocation, "SOURCE_PATH"_s, 3));
	$assignStatic(StandardLocation::ANNOTATION_PROCESSOR_PATH, $new(StandardLocation, "ANNOTATION_PROCESSOR_PATH"_s, 4));
	$assignStatic(StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH, $new(StandardLocation, "ANNOTATION_PROCESSOR_MODULE_PATH"_s, 5));
	$assignStatic(StandardLocation::PLATFORM_CLASS_PATH, $new(StandardLocation, "PLATFORM_CLASS_PATH"_s, 6));
	$assignStatic(StandardLocation::NATIVE_HEADER_OUTPUT, $new(StandardLocation, "NATIVE_HEADER_OUTPUT"_s, 7));
	$assignStatic(StandardLocation::MODULE_SOURCE_PATH, $new(StandardLocation, "MODULE_SOURCE_PATH"_s, 8));
	$assignStatic(StandardLocation::UPGRADE_MODULE_PATH, $new(StandardLocation, "UPGRADE_MODULE_PATH"_s, 9));
	$assignStatic(StandardLocation::SYSTEM_MODULES, $new(StandardLocation, "SYSTEM_MODULES"_s, 10));
	$assignStatic(StandardLocation::MODULE_PATH, $new(StandardLocation, "MODULE_PATH"_s, 11));
	$assignStatic(StandardLocation::PATCH_MODULE_PATH, $new(StandardLocation, "PATCH_MODULE_PATH"_s, 12));
	$assignStatic(StandardLocation::$VALUES, StandardLocation::$values());
	$assignStatic(StandardLocation::locations, $new($ConcurrentHashMap));
}

StandardLocation::StandardLocation() {
}

$Class* StandardLocation::load$($String* name, bool initialize) {
	$loadClass(StandardLocation, name, initialize, &_StandardLocation_ClassInfo_, clinit$StandardLocation, allocate$StandardLocation);
	return class$;
}

$Class* StandardLocation::class$ = nullptr;

	} // tools
} // javax