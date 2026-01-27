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
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
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
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;

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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Token$UnionToken$$Lambda$lambda$toString$0>());
	}
	$StringBuilder* sb = nullptr;
	int32_t options = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Token$UnionToken$$Lambda$lambda$toString$0::fieldInfos[3] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Token$UnionToken$$Lambda$lambda$toString$0, sb)},
	{"options", "I", nullptr, $PUBLIC, $field(Token$UnionToken$$Lambda$lambda$toString$0, options)},
	{}
};
$MethodInfo Token$UnionToken$$Lambda$lambda$toString$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;I)V", nullptr, $PUBLIC, $method(Token$UnionToken$$Lambda$lambda$toString$0, init$, void, $StringBuilder*, int32_t)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Token$UnionToken$$Lambda$lambda$toString$0, accept, void, Object$*)},
	{}
};
$ClassInfo Token$UnionToken$$Lambda$lambda$toString$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken$$Lambda$lambda$toString$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Token$UnionToken$$Lambda$lambda$toString$0::load$($String* name, bool initialize) {
	$loadClass(Token$UnionToken$$Lambda$lambda$toString$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Token$UnionToken$$Lambda$lambda$toString$0::class$ = nullptr;

$FieldInfo _Token$UnionToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$UnionToken, serialVersionUID)},
	{"children", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;", 0, $field(Token$UnionToken, children)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Token$UnionToken, serialPersistentFields)},
	{}
};

$MethodInfo _Token$UnionToken_MethodInfo_[] = {
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

$InnerClassInfo _Token$UnionToken_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "UnionToken", $STATIC},
	{}
};

$ClassInfo _Token$UnionToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_Token$UnionToken_FieldInfo_,
	_Token$UnionToken_MethodInfo_,
	nullptr,
	nullptr,
	_Token$UnionToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$UnionToken($Class* clazz) {
	return $of($alloc(Token$UnionToken));
}

$ObjectStreamFieldArray* Token$UnionToken::serialPersistentFields = nullptr;

void Token$UnionToken::init$(int32_t type) {
	$Token::init$(type);
}

void Token$UnionToken::addChild($Token* tok) {
	$useLocalCurrentObjectStackCache();
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
		$nc(this->children)->add(tok);
		return;
	}
	$var($Token, previous, $cast($Token, $nc(this->children)->get(size - 1)));
	if (!(($nc(previous)->type == $Token::CHAR || $nc(previous)->type == $Token::STRING) && ($nc(tok)->type == $Token::CHAR || $nc(tok)->type == $Token::STRING))) {
		$nc(this->children)->add(tok);
		return;
	}
	$var($StringBuilder, buffer, nullptr);
	int32_t nextMaxLength = ($nc(tok)->type == $Token::CHAR ? 2 : $nc($($nc(tok)->getString()))->length());
	if ($nc(previous)->type == $Token::CHAR) {
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
		$assign(buffer, $new($StringBuilder, $nc($(previous->getString()))->length() + nextMaxLength));
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
	return this->children == nullptr ? 0 : $nc(this->children)->size();
}

$Token* Token$UnionToken::getChild(int32_t index) {
	return $cast($Token, $nc(this->children)->get(index));
}

$String* Token$UnionToken::toString(int32_t options) {
	$useLocalCurrentObjectStackCache();
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
				$var($String, var$0, $($nc(ch)->toString(options)));
				$assign(ret, $concat(var$0, $(ch2->toString(options))));
			}
		} else {
			$var($StringBuilder, sb, $new($StringBuilder));
			$nc($($nc(this->children)->stream()))->forEach(static_cast<$Consumer*>($$new(Token$UnionToken$$Lambda$lambda$toString$0, sb, options)));
			$assign(ret, sb->toString());
		}
		return ret;
	}
	bool var$1 = $nc(this->children)->size() == 2;
	if (var$1 && $nc($(this->getChild(1)))->type == $Token::EMPTY) {
		$assign(ret, $str({$($nc($(this->getChild(0)))->toString(options)), "?"_s}));
	} else {
		bool var$3 = $nc(this->children)->size() == 2;
		if (var$3 && $nc($(this->getChild(0)))->type == $Token::EMPTY) {
			$assign(ret, $str({$($nc($(this->getChild(1)))->toString(options)), "??"_s}));
		} else {
			$var($StringBuilder, sb, $new($StringBuilder));
			sb->append($($nc(($cast($Token, $($nc(this->children)->get(0)))))->toString(options)));
			for (int32_t i = 1; i < $nc(this->children)->size(); ++i) {
				sb->append(u'|');
				sb->append($($nc(($cast($Token, $($nc(this->children)->get(i)))))->toString(options)));
			}
			$assign(ret, sb->toString());
		}
	}
	return ret;
}

void Token$UnionToken::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, vChildren, (this->children == nullptr) ? ($Vector*)nullptr : $new($Vector, static_cast<$Collection*>(this->children)));
	$var($ObjectOutputStream$PutField, pf, $nc(out)->putFields());
	$nc(pf)->put("children"_s, $of(vChildren));
	out->writeFields();
}

void Token$UnionToken::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gf, $nc(in)->readFields());
	$var($Vector, vChildren, $cast($Vector, $nc(gf)->get("children"_s, ($Object*)nullptr)));
	if (vChildren != nullptr) {
		$set(this, children, $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(vChildren)))));
	}
}

void Token$UnionToken::lambda$toString$0($StringBuilder* sb, int32_t options, $Token* children1) {
	$init(Token$UnionToken);
	$nc(sb)->append($($nc((children1))->toString(options)));
}

void clinit$Token$UnionToken($Class* class$) {
	$load($Vector);
	$assignStatic(Token$UnionToken::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "children"_s, $Vector::class$)}));
}

Token$UnionToken::Token$UnionToken() {
}

$Class* Token$UnionToken::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Token$UnionToken$$Lambda$lambda$toString$0::classInfo$.name)) {
			return Token$UnionToken$$Lambda$lambda$toString$0::load$(name, initialize);
		}
	}
	$loadClass(Token$UnionToken, name, initialize, &_Token$UnionToken_ClassInfo_, clinit$Token$UnionToken, allocate$Token$UnionToken);
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