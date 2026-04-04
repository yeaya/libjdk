#include <javax/swing/text/html/parser/TagStack.h>
#include <java/util/BitSet.h>
#include <javax/swing/text/html/parser/ContentModel.h>
#include <javax/swing/text/html/parser/ContentModelState.h>
#include <javax/swing/text/html/parser/DTDConstants.h>
#include <javax/swing/text/html/parser/Element.h>
#include <javax/swing/text/html/parser/TagElement.h>
#include <jcpp.h>

#undef ANY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $ContentModel = ::javax::swing::text::html::parser::ContentModel;
using $ContentModelState = ::javax::swing::text::html::parser::ContentModelState;
using $DTDConstants = ::javax::swing::text::html::parser::DTDConstants;
using $Element = ::javax::swing::text::html::parser::Element;
using $TagElement = ::javax::swing::text::html::parser::TagElement;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

void TagStack::init$($TagElement* tag, TagStack* next) {
	$useLocalObjectStack();
	$set(this, tag, tag);
	$set(this, elem, $nc(tag)->getElement());
	$set(this, next, next);
	$var($Element, elem, tag->getElement());
	if ($nc(elem)->getContent() != nullptr) {
		$set(this, state, $new($ContentModelState, $(elem->getContent())));
	}
	if (next != nullptr) {
		$set(this, inclusions, next->inclusions);
		$set(this, exclusions, next->exclusions);
		this->pre = next->pre;
	}
	if (tag->isPreformatted()) {
		this->pre = true;
	}
	if (elem->inclusions != nullptr) {
		if (this->inclusions != nullptr) {
			$set(this, inclusions, $cast($BitSet, this->inclusions->clone()));
			$nc(this->inclusions)->or$(elem->inclusions);
		} else {
			$set(this, inclusions, elem->inclusions);
		}
	}
	if (elem->exclusions != nullptr) {
		if (this->exclusions != nullptr) {
			$set(this, exclusions, $cast($BitSet, this->exclusions->clone()));
			$nc(this->exclusions)->or$(elem->exclusions);
		} else {
			$set(this, exclusions, elem->exclusions);
		}
	}
}

$Element* TagStack::first() {
	return (this->state != nullptr) ? this->state->first() : ($Element*)nullptr;
}

$ContentModel* TagStack::contentModel() {
	if (this->state == nullptr) {
		return nullptr;
	} else {
		return this->state->getModel();
	}
}

bool TagStack::excluded(int32_t elemIndex) {
	return (this->exclusions != nullptr) && this->exclusions->get($nc(this->elem)->getIndex());
}

bool TagStack::advance($Element* elem) {
	if ((this->exclusions != nullptr) && this->exclusions->get($nc(elem)->getIndex())) {
		return false;
	}
	if (this->state != nullptr) {
		$var($ContentModelState, newState, this->state->advance(elem));
		if (newState != nullptr) {
			$set(this, state, newState);
			return true;
		}
	} else if ($nc(this->elem)->getType() == $DTDConstants::ANY) {
		return true;
	}
	return (this->inclusions != nullptr) && this->inclusions->get($nc(elem)->getIndex());
}

bool TagStack::terminate() {
	return (this->state == nullptr) || this->state->terminate();
}

$String* TagStack::toString() {
	$useLocalObjectStack();
	$var($String, var$0, nullptr);
	if (this->next == nullptr) {
		$assign(var$0, $str({"<"_s, $($$nc($nc(this->tag)->getElement())->getName()), ">"_s}));
	} else {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append(this->next);
		var$1->append(" <"_s);
		var$1->append($($$nc($nc(this->tag)->getElement())->getName()));
		var$1->append(">"_s);
		$assign(var$0, $str(var$1));
	}
	return var$0;
}

TagStack::TagStack() {
}

$Class* TagStack::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tag", "Ljavax/swing/text/html/parser/TagElement;", nullptr, 0, $field(TagStack, tag)},
		{"elem", "Ljavax/swing/text/html/parser/Element;", nullptr, 0, $field(TagStack, elem)},
		{"state", "Ljavax/swing/text/html/parser/ContentModelState;", nullptr, 0, $field(TagStack, state)},
		{"next", "Ljavax/swing/text/html/parser/TagStack;", nullptr, 0, $field(TagStack, next)},
		{"inclusions", "Ljava/util/BitSet;", nullptr, 0, $field(TagStack, inclusions)},
		{"exclusions", "Ljava/util/BitSet;", nullptr, 0, $field(TagStack, exclusions)},
		{"net", "Z", nullptr, 0, $field(TagStack, net)},
		{"pre", "Z", nullptr, 0, $field(TagStack, pre)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/parser/TagElement;Ljavax/swing/text/html/parser/TagStack;)V", nullptr, 0, $method(TagStack, init$, void, $TagElement*, TagStack*)},
		{"advance", "(Ljavax/swing/text/html/parser/Element;)Z", nullptr, 0, $method(TagStack, advance, bool, $Element*)},
		{"contentModel", "()Ljavax/swing/text/html/parser/ContentModel;", nullptr, $PUBLIC, $method(TagStack, contentModel, $ContentModel*)},
		{"excluded", "(I)Z", nullptr, 0, $method(TagStack, excluded, bool, int32_t)},
		{"first", "()Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC, $method(TagStack, first, $Element*)},
		{"terminate", "()Z", nullptr, 0, $method(TagStack, terminate, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TagStack, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.text.html.parser.TagStack",
		"java.lang.Object",
		"javax.swing.text.html.parser.DTDConstants",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TagStack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TagStack);
	});
	return class$;
}

$Class* TagStack::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax