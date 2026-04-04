#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Position = ::javax::swing::text::Position;
using $Segment = ::javax::swing::text::Segment;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$Class* AbstractDocument$Content::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createPosition", "(I)Ljavax/swing/text/Position;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$Content, createPosition, $Position*, int32_t), "javax.swing.text.BadLocationException"},
		{"getChars", "(IILjavax/swing/text/Segment;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$Content, getChars, void, int32_t, int32_t, $Segment*), "javax.swing.text.BadLocationException"},
		{"getString", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$Content, getString, $String*, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"insertString", "(ILjava/lang/String;)Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$Content, insertString, $UndoableEdit*, int32_t, $String*), "javax.swing.text.BadLocationException"},
		{"length", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$Content, length, int32_t)},
		{"remove", "(II)Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$Content, remove, $UndoableEdit*, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AbstractDocument$Content", "javax.swing.text.AbstractDocument", "Content", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.AbstractDocument$Content",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.AbstractDocument"
	};
	$loadClass(AbstractDocument$Content, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocument$Content);
	});
	return class$;
}

$Class* AbstractDocument$Content::class$ = nullptr;

		} // text
	} // swing
} // javax