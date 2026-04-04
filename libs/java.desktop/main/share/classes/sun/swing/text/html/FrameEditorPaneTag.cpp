#include <sun/swing/text/html/FrameEditorPaneTag.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace swing {
		namespace text {
			namespace html {

$Class* FrameEditorPaneTag::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.text.html.FrameEditorPaneTag"
	};
	$loadClass(FrameEditorPaneTag, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FrameEditorPaneTag);
	});
	return class$;
}

$Class* FrameEditorPaneTag::class$ = nullptr;

			} // html
		} // text
	} // swing
} // sun