#include <com/sun/tools/javac/util/UnsharedNameTable.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/UnsharedNameTable$HashEntry.h>
#include <com/sun/tools/javac/util/UnsharedNameTable$NameImpl.h>
#include <java/lang/ref/Reference.h>
#include <jcpp.h>

using $UnsharedNameTable$HashEntryArray = $Array<::com::sun::tools::javac::util::UnsharedNameTable$HashEntry>;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $UnsharedNameTable$HashEntry = ::com::sun::tools::javac::util::UnsharedNameTable$HashEntry;
using $UnsharedNameTable$NameImpl = ::com::sun::tools::javac::util::UnsharedNameTable$NameImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Name$Table* UnsharedNameTable::create($Names* names) {
	$init(UnsharedNameTable);
	return $new(UnsharedNameTable, names);
}

void UnsharedNameTable::init$($Names* names, int32_t hashSize) {
	$Name$Table::init$(names);
	$set(this, hashes, nullptr);
	this->hashMask = hashSize - 1;
	$set(this, hashes, $new($UnsharedNameTable$HashEntryArray, hashSize));
}

void UnsharedNameTable::init$($Names* names) {
	UnsharedNameTable::init$(names, 0x00008000);
}

$Name* UnsharedNameTable::fromChars($chars* cs, int32_t start, int32_t len) {
	$var($bytes, name, $new($bytes, len * 3));
	int32_t nbytes = $Convert::chars2utf(cs, start, name, 0, len);
	return fromUtf(name, 0, nbytes);
}

$Name* UnsharedNameTable::fromUtf($bytes* cs, int32_t start, int32_t len) {
	$useLocalObjectStack();
	int32_t h = hashValue(cs, start, len) & this->hashMask;
	$var($UnsharedNameTable$HashEntry, element, $nc(this->hashes)->get(h));
	$var($UnsharedNameTable$NameImpl, n, nullptr);
	$var($UnsharedNameTable$HashEntry, previousNonNullTableEntry, nullptr);
	$var($UnsharedNameTable$HashEntry, firstTableEntry, element);
	while (element != nullptr) {
		$assign(n, $cast($UnsharedNameTable$NameImpl, element->get()));
		if (n == nullptr) {
			if (firstTableEntry == element) {
				$nc(this->hashes)->set(h, $assign(firstTableEntry, element->next));
			} else {
				$Assert::checkNonNull(previousNonNullTableEntry, "previousNonNullTableEntry cannot be null here."_s);
				$set($nc(previousNonNullTableEntry), next, element->next);
			}
		} else {
			bool var$0 = n->getByteLength() == len;
			if (var$0 && equals(n->bytes, 0, cs, start, len)) {
				return n;
			}
			$assign(previousNonNullTableEntry, element);
		}
		$assign(element, element->next);
	}
	$var($bytes, bytes, $new($bytes, len));
	$System::arraycopy(cs, start, bytes, 0, len);
	$assign(n, $new($UnsharedNameTable$NameImpl, this, bytes, this->index++));
	$var($UnsharedNameTable$HashEntry, newEntry, $new($UnsharedNameTable$HashEntry, n));
	if (previousNonNullTableEntry == nullptr) {
		$nc(this->hashes)->set(h, newEntry);
	} else {
		$Assert::checkNull(previousNonNullTableEntry->next, "previousNonNullTableEntry.next must be null."_s);
		$set(previousNonNullTableEntry, next, newEntry);
	}
	return n;
}

void UnsharedNameTable::dispose() {
	$set(this, hashes, nullptr);
}

UnsharedNameTable::UnsharedNameTable() {
}

$Class* UnsharedNameTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hashes", "[Lcom/sun/tools/javac/util/UnsharedNameTable$HashEntry;", nullptr, $PRIVATE, $field(UnsharedNameTable, hashes)},
		{"hashMask", "I", nullptr, $PRIVATE, $field(UnsharedNameTable, hashMask)},
		{"index", "I", nullptr, $PUBLIC, $field(UnsharedNameTable, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Names;I)V", nullptr, $PUBLIC, $method(UnsharedNameTable, init$, void, $Names*, int32_t)},
		{"<init>", "(Lcom/sun/tools/javac/util/Names;)V", nullptr, $PUBLIC, $method(UnsharedNameTable, init$, void, $Names*)},
		{"create", "(Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/Name$Table;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnsharedNameTable, create, $Name$Table*, $Names*)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(UnsharedNameTable, dispose, void)},
		{"fromChars", "([CII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $virtualMethod(UnsharedNameTable, fromChars, $Name*, $chars*, int32_t, int32_t)},
		{"fromUtf", "([BII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $virtualMethod(UnsharedNameTable, fromUtf, $Name*, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Name$Table", "com.sun.tools.javac.util.Name", "Table", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.util.UnsharedNameTable$NameImpl", "com.sun.tools.javac.util.UnsharedNameTable", "NameImpl", $STATIC},
		{"com.sun.tools.javac.util.UnsharedNameTable$HashEntry", "com.sun.tools.javac.util.UnsharedNameTable", "HashEntry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.UnsharedNameTable",
		"com.sun.tools.javac.util.Name$Table",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.UnsharedNameTable$NameImpl,com.sun.tools.javac.util.UnsharedNameTable$HashEntry"
	};
	$loadClass(UnsharedNameTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsharedNameTable);
	});
	return class$;
}

$Class* UnsharedNameTable::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com