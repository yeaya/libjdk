#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$UnionToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$StringToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CHAR
#undef CLOSURE
#undef CONCAT
#undef EMPTY
#undef NONGREEDYCLOSURE
#undef STRING
#undef UNION

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $REUtil = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::REUtil;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $Token$StringToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$StringToken;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Vector = ::java::util::Vector;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class Token$UnionToken$$Lambda$lambda$toString$0 : public $Consumer {
	$class(Token$UnionToken$$Lambda$lambda$toString$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb, int32_t options) {
		$set(this, sb, sb);
		this->options = options;
	}
	virtual void accept(Object$* children1) override {
		Token$UnionToken::lambda$toString$0(sb, options, $cast($Token, children1));
	}
	$StringBuilder* sb = nullptr;
	int32_t options = 0;
};
$Class* Token$UnionToken$$Lambda$lambda$toString$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Token$UnionToken$$Lambda$lambda$toString$0, sb)},
		{"options", "I", nullptr, $PUBLIC, $field(Token$UnionToken$$Lambda$lambda$toString$0, options)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StringBuilder;I)V", nullptr, $PUBLIC, $method(Token$UnionToken$$Lambda$lambda$toString$0, init$, void, $StringBuilder*, int32_t)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Token$UnionToken$$Lambda$lambda$toString$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken$$Lambda$lambda$toString$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Token$UnionToken$$Lambda$lambda$toString$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Token$UnionToken$$Lambda$lambda$toString$0);
	});
	return class$;
}
$Class* Token$UnionToken$$Lambda$lambda$toString$0::class$ = nullptr;

$ObjectStreamFieldArray* Token$UnionToken::serialPersistentFields = nullptr;

void Token$UnionToken::init$(int32_t type) {
	$Token::init$(type);
}

void Token$UnionToken::addChild($Token* tok) {
	$useLocalObjectStack();
	if (tok == nullptr) {
		return;
	}
	if (this->children == nullptr) {
		$set(this, children, $new($ArrayList));
	}
	if (this->type == $Token::UNION) {
		$nc(this->children)->add(tok);
		return;
	}
	if ($nc(tok)->type == $Token::CONCAT) {
		for (int32_t i = 0; i < tok->size(); ++i) {
			this->addChild($(tok->getChild(i)));
		}
		return;
	}
	int32_t size = $nc(this->children)->size();
	if (size == 0) {
		this->children->add(tok);
		return;
	}
	$var($Token, previous, $cast($Token, this->children->get(size - 1)));
	if (!(($nc(previous)->type == $Token::CHAR || previous->type == $Token::STRING) && (tok->type == $Token::CHAR || tok->type == $Token::STRING))) {
		this->children->add(tok);
		return;
	}
	$var($StringBuilder, buffer, nullptr);
	int32_t nextMaxLength = (tok->type == $Token::CHAR ? 2 : $$nc(tok->getString())->length());
	if (previous->type == $Token::CHAR) {
		$assign(buffer, $new($StringBuilder, 2 + nextMaxLength));
		int32_t ch = previous->getChar();
		if (ch >= 0x00010000) {
			buffer->append($($REUtil::decomposeToSurrogates(ch)));
		} else {
			buffer->append((char16_t)ch);
		}
		$assign(previous, $Token::createString(nullptr));
		$nc(this->children)->set(size - 1, previous);
	} else {
		$assign(buffer, $new($StringBuilder, $$nc(previous->getString())->length() + nextMaxLength));
		buffer->append($(previous->getString()));
	}
	if (tok->type == $Token::CHAR) {
		int32_t ch = tok->getChar();
		if (ch >= 0x00010000) {
			$nc(buffer)->append($($REUtil::decomposeToSurrogates(ch)));
		} else {
			$nc(buffer)->append((char16_t)ch);
		}
	} else {
		$nc(buffer)->append($(tok->getString()));
	}
	$set($nc($cast($Token$StringToken, previous)), string, $new($String, buffer));
}

int32_t Token$UnionToken::size() {
	return this->children == nullptr ? 0 : this->children->size();
}

$Token* Token$UnionToken::getChild(int32_t index) {
	return $cast($Token, $nc(this->children)->get(index));
}

$String* Token$UnionToken::toString(int32_t options) {
	$useLocalObjectStack();
	$var($String, ret, nullptr);
	if (this->type == $Token::CONCAT) {
		if ($nc(this->children)->size() == 2) {
			$var($Token, ch, this->getChild(0));
			$var($Token, ch2, this->getChild(1));
			if ($nc(ch2)->type == $Token::CLOSURE && ch2->getChild(0) == ch) {
				$assign(ret, $str({$($nc(ch)->toString(options)), "+"_s}));
			} else if (ch2->type == $Token::NONGREEDYCLOSURE && ch2->getChild(0) == ch) {
				$assign(ret, $str({$($nc(ch)->toString(options)), "+?"_s}));
			} else {
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append($($nc(ch)->toString(options)));
				var$0->append($(ch2->toString(options)));
				$assign(ret, $str(var$0));
			}
		} else {
			$var($StringBuilder, sb, $new($StringBuilder));
			$$nc(this->children->stream())->forEach($$new(Token$UnionToken$$Lambda$lambda$toString$0, sb, options));
			$assign(ret, sb->toString());
		}
		return ret;
	}
	bool var$1 = $nc(this->children)->size() == 2;
	if (var$1 && $nc($(this->getChild(1)))->type == $Token::EMPTY) {
		$assign(ret, $str({$($$nc(this->getChild(0))->toString(options)), "?"_s}));
	} else {
		bool var$2 = $nc(this->children)->size() == 2;
		if (var$2 && $nc($(this->getChild(0)))->type == $Token::EMPTY) {
			$assign(ret, $str({$($$nc(this->getChild(1))->toString(options)), "??"_s}));
		} else {
			$var($StringBuilder, sb, $new($StringBuilder));
			sb->append($($$sure($Token, $nc(this->children)->get(0))->toString(options)));
			for (int32_t i = 1; i < $nc(this->children)->size(); ++i) {
				sb->append(u'|');
				sb->append($($$sure($Token, this->children->get(i))->toString(options)));
			}
			$assign(ret, sb->toString());
		}
	}
	return ret;
}

void Token$UnionToken::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($Vector, vChildren, (this->children == nullptr) ? ($Vector*)nullptr : $new($Vector, this->children));
	$var($ObjectOutputStream$PutField, pf, $nc(out)->putFields());
	$nc(pf)->put("children"_s, vChildren);
	out->writeFields();
}

void Token$UnionToken::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gf, $nc(in)->readFields());
	$var($Vector, vChildren, $cast($Vector, $nc(gf)->get("children"_s, nullptr)));
	if (vChildren != nullptr) {
		$set(this, children, $new($ArrayList, $cast($AbstractCollection, vChildren)));
	}
}

void Token$UnionToken::lambda$toString$0($StringBuilder* sb, int32_t options, $Token* children1) {
	$init(Token$UnionToken);
	$nc(sb)->append($($nc((children1))->toString(options)));
}

void Token$UnionToken::clinit$($Class* clazz) {
	$load($Vector);
	$assignStatic(Token$UnionToken::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "children"_s, $Vector::class$)}));
}

Token$UnionToken::Token$UnionToken() {
}

$Class* Token$UnionToken::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken$$Lambda$lambda$toString$0")) {
			return Token$UnionToken$$Lambda$lambda$toString$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$UnionToken, serialVersionUID)},
		{"children", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;", 0, $field(Token$UnionToken, children)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Token$UnionToken, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(Token$UnionToken, init$, void, int32_t)},
		{"addChild", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, 0, $virtualMethod(Token$UnionToken, addChild, void, $Token*)},
		{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token$UnionToken, getChild, $Token*, int32_t)},
		{"lambda$toString$0", "(Ljava/lang/StringBuilder;ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Token$UnionToken, lambda$toString$0, void, $StringBuilder*, int32_t, $Token*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(Token$UnionToken, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"size", "()I", nullptr, 0, $virtualMethod(Token$UnionToken, size, int32_t)},
		{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$UnionToken, toString, $String*, int32_t)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(Token$UnionToken, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "UnionToken", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken",
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
	};
	$loadClass(Token$UnionToken, name, initialize, &classInfo$$, Token$UnionToken::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Token$UnionToken);
	});
	return class$;
}

$Class* Token$UnionToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com