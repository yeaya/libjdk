#include <com/sun/source/doctree/EntityTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* EntityTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityTree, getName, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.EntityTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(EntityTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EntityTree);
	});
	return class$;
}

$Class* EntityTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com