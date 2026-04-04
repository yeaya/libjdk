#include <java/awt/JobAttributes$DestinationType.h>
#include <java/awt/AttributeValue.h>
#include <java/awt/JobAttributes.h>
#include <jcpp.h>

#undef FILE
#undef I_FILE
#undef I_PRINTER
#undef NAMES
#undef PRINTER

using $AttributeValue = ::java::awt::AttributeValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$StringArray* JobAttributes$DestinationType::NAMES = nullptr;
JobAttributes$DestinationType* JobAttributes$DestinationType::FILE = nullptr;
JobAttributes$DestinationType* JobAttributes$DestinationType::PRINTER = nullptr;

void JobAttributes$DestinationType::init$(int32_t type) {
	$AttributeValue::init$(type, JobAttributes$DestinationType::NAMES);
}

$String* JobAttributes$DestinationType::toString() {
	return $AttributeValue::toString();
}

int32_t JobAttributes$DestinationType::hashCode() {
	return $AttributeValue::hashCode();
}

void JobAttributes$DestinationType::clinit$($Class* clazz) {
	$assignStatic(JobAttributes$DestinationType::NAMES, $new($StringArray, {
		"file"_s,
		"printer"_s
	}));
	$assignStatic(JobAttributes$DestinationType::FILE, $new(JobAttributes$DestinationType, JobAttributes$DestinationType::I_FILE));
	$assignStatic(JobAttributes$DestinationType::PRINTER, $new(JobAttributes$DestinationType, JobAttributes$DestinationType::I_PRINTER));
}

JobAttributes$DestinationType::JobAttributes$DestinationType() {
}

$Class* JobAttributes$DestinationType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"I_FILE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DestinationType, I_FILE)},
		{"I_PRINTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DestinationType, I_PRINTER)},
		{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobAttributes$DestinationType, NAMES)},
		{"FILE", "Ljava/awt/JobAttributes$DestinationType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DestinationType, FILE)},
		{"PRINTER", "Ljava/awt/JobAttributes$DestinationType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DestinationType, PRINTER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(JobAttributes$DestinationType, init$, void, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JobAttributes$DestinationType, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JobAttributes$DestinationType, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.JobAttributes$DestinationType", "java.awt.JobAttributes", "DestinationType", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.JobAttributes$DestinationType",
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
	$loadClass(JobAttributes$DestinationType, name, initialize, &classInfo$$, JobAttributes$DestinationType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JobAttributes$DestinationType);
	});
	return class$;
}

$Class* JobAttributes$DestinationType::class$ = nullptr;

	} // awt
} // java