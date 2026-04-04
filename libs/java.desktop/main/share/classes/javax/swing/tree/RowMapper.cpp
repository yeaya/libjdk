#include <javax/swing/tree/RowMapper.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace tree {

$Class* RowMapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getRowsForPaths", "([Ljavax/swing/tree/TreePath;)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowMapper, getRowsForPaths, $ints*, $TreePathArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.tree.RowMapper",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RowMapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowMapper);
	});
	return class$;
}

$Class* RowMapper::class$ = nullptr;

		} // tree
	} // swing
} // javax