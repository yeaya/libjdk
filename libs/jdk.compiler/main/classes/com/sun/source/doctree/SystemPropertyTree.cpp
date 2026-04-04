#include <com/sun/source/doctree/SystemPropertyTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* SystemPropertyTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPropertyName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SystemPropertyTree, getPropertyName, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.SystemPropertyTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SystemPropertyTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemPropertyTree);
	});
	return class$;
}

$Class* SystemPropertyTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com