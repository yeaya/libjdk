#include <com/sun/org/apache/xalan/internal/xsltc/trax/OutputSettings.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

void OutputSettings::init$() {
	$set(this, _cdata_section_elements, nullptr);
	$set(this, _doctype_public, nullptr);
	$set(this, _encoding, nullptr);
	$set(this, _indent, nullptr);
	$set(this, _media_type, nullptr);
	$set(this, _method, nullptr);
	$set(this, _omit_xml_declaration, nullptr);
	$set(this, _standalone, nullptr);
	$set(this, _version, nullptr);
}

$Properties* OutputSettings::getProperties() {
	$var($Properties, properties, $new($Properties));
	return (properties);
}

OutputSettings::OutputSettings() {
}

$Class* OutputSettings::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_cdata_section_elements", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _cdata_section_elements)},
		{"_doctype_public", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _doctype_public)},
		{"_encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _encoding)},
		{"_indent", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _indent)},
		{"_media_type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _media_type)},
		{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _method)},
		{"_omit_xml_declaration", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _omit_xml_declaration)},
		{"_standalone", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _standalone)},
		{"_version", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _version)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OutputSettings, init$, void)},
		{"getProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC, $method(OutputSettings, getProperties, $Properties*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.trax.OutputSettings",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OutputSettings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OutputSettings);
	});
	return class$;
}

$Class* OutputSettings::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com