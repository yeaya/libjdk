#include <java/awt/JobAttributes$DefaultSelectionType.h>
#include <java/awt/AttributeValue.h>
#include <java/awt/JobAttributes.h>
#include <jcpp.h>

#undef ALL
#undef I_ALL
#undef I_RANGE
#undef I_SELECTION
#undef NAMES
#undef RANGE
#undef SELECTION

using $AttributeValue = ::java::awt::AttributeValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$StringArray* JobAttributes$DefaultSelectionType::NAMES = nullptr;
JobAttributes$DefaultSelectionType* JobAttributes$DefaultSelectionType::ALL = nullptr;
JobAttributes$DefaultSelectionType* JobAttributes$DefaultSelectionType::RANGE = nullptr;
JobAttributes$DefaultSelectionType* JobAttributes$DefaultSelectionType::SELECTION = nullptr;

void JobAttributes$DefaultSelectionType::init$(int32_t type) {
	$AttributeValue::init$(type, JobAttributes$DefaultSelectionType::NAMES);
}

$String* JobAttributes$DefaultSelectionType::toString() {
	return $AttributeValue::toString();
}

int32_t JobAttributes$DefaultSelectionType::hashCode() {
	return $AttributeValue::hashCode();
}

void JobAttributes$DefaultSelectionType::clinit$($Class* clazz) {
	$assignStatic(JobAttributes$DefaultSelectionType::NAMES, $new($StringArray, {
		"all"_s,
		"range"_s,
		"selection"_s
	}));
	$assignStatic(JobAttributes$DefaultSelectionType::ALL, $new(JobAttributes$DefaultSelectionType, JobAttributes$DefaultSelectionType::I_ALL));
	$assignStatic(JobAttributes$DefaultSelectionType::RANGE, $new(JobAttributes$DefaultSelectionType, JobAttributes$DefaultSelectionType::I_RANGE));
	$assignStatic(JobAttributes$DefaultSelectionType::SELECTION, $new(JobAttributes$DefaultSelectionType, JobAttributes$DefaultSelectionType::I_SELECTION));
}

JobAttributes$DefaultSelectionType::JobAttributes$DefaultSelectionType() {
}

$Class* JobAttributes$DefaultSelectionType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"I_ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DefaultSelectionType, I_ALL)},
		{"I_RANGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DefaultSelectionType, I_RANGE)},
		{"I_SELECTION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DefaultSelectionType, I_SELECTION)},
		{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobAttributes$DefaultSelectionType, NAMES)},
		{"ALL", "Ljava/awt/JobAttributes$DefaultSelectionType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DefaultSelectionType, ALL)},
		{"RANGE", "Ljava/awt/JobAttributes$DefaultSelectionType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DefaultSelectionType, RANGE)},
		{"SELECTION", "Ljava/awt/JobAttributes$DefaultSelectionType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DefaultSelectionType, SELECTION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(JobAttributes$DefaultSelectionType, init$, void, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JobAttributes$DefaultSelectionType, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JobAttributes$DefaultSelectionType, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.JobAttributes$DefaultSelectionType", "java.awt.JobAttributes", "DefaultSelectionType", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.JobAttributes$DefaultSelectionType",
		"java.awt.AttributeValue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.JobAttributes"
	};
	$loadClass(JobAttributes$DefaultSelectionType, name, initialize, &classInfo$$, JobAttributes$DefaultSelectionType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JobAttributes$DefaultSelectionType);
	});
	return class$;
}

$Class* JobAttributes$DefaultSelectionType::class$ = nullptr;

	} // awt
} // java