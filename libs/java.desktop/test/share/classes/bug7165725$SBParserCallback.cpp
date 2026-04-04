#include <bug7165725$SBParserCallback.h>
#include <bug7165725.h>
#include <java/lang/StringBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

void bug7165725$SBParserCallback::init$() {
	$HTMLEditorKit$ParserCallback::init$();
	this->indentSize = 0;
	$set(this, elist, $new($ArrayList));
}

$String* bug7165725$SBParserCallback::getStringOneLine() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($Iterator, i$, $nc(this->elist)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			sb->append(s);
		}
	}
	return sb->toString();
}

$String* bug7165725$SBParserCallback::toString() {
	$useLocalObjectStack();
	$var($StringBuffer, sb, $new($StringBuffer));
	{
		$var($Iterator, i$, $nc(this->elist)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			sb->append($$str({s, "\n"_s}));
		}
	}
	return sb->toString();
}

void bug7165725$SBParserCallback::indent() {
	this->indentSize += 3;
}

void bug7165725$SBParserCallback::unIndent() {
	this->indentSize -= 3;
	if (this->indentSize < 0) {
		this->indentSize = 0;
	}
}

$String* bug7165725$SBParserCallback::pIndent() {
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0; i < this->indentSize; ++i) {
		sb->append(" "_s);
	}
	return sb->toString();
}

void bug7165725$SBParserCallback::handleText($chars* data, int32_t pos) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(pIndent()));
	var$0->append("Text("_s);
	var$0->append($nc(data)->length);
	var$0->append(" chars) \""_s);
	var$0->append($$new($String, data));
	var$0->append("\""_s);
	$nc(this->elist)->add($$str(var$0));
}

void bug7165725$SBParserCallback::handleComment($chars* data, int32_t pos) {
	$useLocalObjectStack();
	$nc(this->elist)->add($$str({$(pIndent()), "Comment("_s, $$str($nc(data)->length), " chars)"_s}));
}

void bug7165725$SBParserCallback::handleStartTag($HTML$Tag* t, $MutableAttributeSet* a, int32_t pos) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(pIndent()));
	var$0->append("Tag start(<"_s);
	var$0->append($($nc(t)->toString()));
	var$0->append(" "_s);
	var$0->append(a);
	var$0->append(">, "_s);
	var$0->append($nc(a)->getAttributeCount());
	var$0->append(" attrs)"_s);
	$nc(this->elist)->add($$str(var$0));
	indent();
}

void bug7165725$SBParserCallback::handleEndTag($HTML$Tag* t, int32_t pos) {
	$useLocalObjectStack();
	unIndent();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(pIndent()));
	var$0->append("Tag end(</"_s);
	var$0->append($($nc(t)->toString()));
	var$0->append(">)"_s);
	$nc(this->elist)->add($$str(var$0));
}

void bug7165725$SBParserCallback::handleSimpleTag($HTML$Tag* t, $MutableAttributeSet* a, int32_t pos) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(pIndent()));
	var$0->append("Tag(<"_s);
	var$0->append($($nc(t)->toString()));
	var$0->append(">, "_s);
	var$0->append($nc(a)->getAttributeCount());
	var$0->append(" attrs)"_s);
	$nc(this->elist)->add($$str(var$0));
}

void bug7165725$SBParserCallback::handleError($String* errorMsg, int32_t pos) {
}

bug7165725$SBParserCallback::bug7165725$SBParserCallback() {
}

$Class* bug7165725$SBParserCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"indentSize", "I", nullptr, $PRIVATE, $field(bug7165725$SBParserCallback, indentSize)},
		{"elist", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE, $field(bug7165725$SBParserCallback, elist)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7165725$SBParserCallback, init$, void)},
		{"getStringOneLine", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug7165725$SBParserCallback, getStringOneLine, $String*)},
		{"handleComment", "([CI)V", nullptr, $PUBLIC, $virtualMethod(bug7165725$SBParserCallback, handleComment, void, $chars*, int32_t)},
		{"handleEndTag", "(Ljavax/swing/text/html/HTML$Tag;I)V", nullptr, $PUBLIC, $virtualMethod(bug7165725$SBParserCallback, handleEndTag, void, $HTML$Tag*, int32_t)},
		{"handleError", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(bug7165725$SBParserCallback, handleError, void, $String*, int32_t)},
		{"handleSimpleTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC, $virtualMethod(bug7165725$SBParserCallback, handleSimpleTag, void, $HTML$Tag*, $MutableAttributeSet*, int32_t)},
		{"handleStartTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC, $virtualMethod(bug7165725$SBParserCallback, handleStartTag, void, $HTML$Tag*, $MutableAttributeSet*, int32_t)},
		{"handleText", "([CI)V", nullptr, $PUBLIC, $virtualMethod(bug7165725$SBParserCallback, handleText, void, $chars*, int32_t)},
		{"indent", "()V", nullptr, $PROTECTED, $virtualMethod(bug7165725$SBParserCallback, indent, void)},
		{"pIndent", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(bug7165725$SBParserCallback, pIndent, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug7165725$SBParserCallback, toString, $String*)},
		{"unIndent", "()V", nullptr, $PROTECTED, $virtualMethod(bug7165725$SBParserCallback, unIndent, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7165725$SBParserCallback", "bug7165725", "SBParserCallback", $STATIC},
		{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7165725$SBParserCallback",
		"javax.swing.text.html.HTMLEditorKit$ParserCallback",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7165725"
	};
	$loadClass(bug7165725$SBParserCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7165725$SBParserCallback);
	});
	return class$;
}

$Class* bug7165725$SBParserCallback::class$ = nullptr;