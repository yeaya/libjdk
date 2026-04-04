#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter$ForwardingConfiguration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $DiagnosticFormatter$Configuration$MultilineLimit = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void ForwardingDiagnosticFormatter$ForwardingConfiguration::init$($DiagnosticFormatter$Configuration* configuration) {
	$set(this, configuration, configuration);
}

$DiagnosticFormatter$Configuration* ForwardingDiagnosticFormatter$ForwardingConfiguration::getDelegatedConfiguration() {
	return this->configuration;
}

int32_t ForwardingDiagnosticFormatter$ForwardingConfiguration::getMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit* limit) {
	return $nc(this->configuration)->getMultilineLimit(limit);
}

$Set* ForwardingDiagnosticFormatter$ForwardingConfiguration::getVisible() {
	return $nc(this->configuration)->getVisible();
}

void ForwardingDiagnosticFormatter$ForwardingConfiguration::setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit* limit, int32_t value) {
	$nc(this->configuration)->setMultilineLimit(limit, value);
}

void ForwardingDiagnosticFormatter$ForwardingConfiguration::setVisible($Set* diagParts) {
	$nc(this->configuration)->setVisible(diagParts);
}

ForwardingDiagnosticFormatter$ForwardingConfiguration::ForwardingDiagnosticFormatter$ForwardingConfiguration() {
}

$Class* ForwardingDiagnosticFormatter$ForwardingConfiguration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"configuration", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;", nullptr, $PROTECTED, $field(ForwardingDiagnosticFormatter$ForwardingConfiguration, configuration)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;)V", nullptr, $PUBLIC, $method(ForwardingDiagnosticFormatter$ForwardingConfiguration, init$, void, $DiagnosticFormatter$Configuration*)},
		{"getDelegatedConfiguration", "()Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;", nullptr, $PUBLIC, $virtualMethod(ForwardingDiagnosticFormatter$ForwardingConfiguration, getDelegatedConfiguration, $DiagnosticFormatter$Configuration*)},
		{"getMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;)I", nullptr, $PUBLIC, $virtualMethod(ForwardingDiagnosticFormatter$ForwardingConfiguration, getMultilineLimit, int32_t, $DiagnosticFormatter$Configuration$MultilineLimit*)},
		{"getVisible", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;", $PUBLIC, $virtualMethod(ForwardingDiagnosticFormatter$ForwardingConfiguration, getVisible, $Set*)},
		{"setMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;I)V", nullptr, $PUBLIC, $virtualMethod(ForwardingDiagnosticFormatter$ForwardingConfiguration, setMultilineLimit, void, $DiagnosticFormatter$Configuration$MultilineLimit*, int32_t)},
		{"setVisible", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;)V", $PUBLIC, $virtualMethod(ForwardingDiagnosticFormatter$ForwardingConfiguration, setVisible, void, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration", "com.sun.tools.javac.util.ForwardingDiagnosticFormatter", "ForwardingConfiguration", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration",
		"java.lang.Object",
		"com.sun.tools.javac.api.DiagnosticFormatter$Configuration",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.ForwardingDiagnosticFormatter"
	};
	$loadClass(ForwardingDiagnosticFormatter$ForwardingConfiguration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForwardingDiagnosticFormatter$ForwardingConfiguration);
	});
	return class$;
}

$Class* ForwardingDiagnosticFormatter$ForwardingConfiguration::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com