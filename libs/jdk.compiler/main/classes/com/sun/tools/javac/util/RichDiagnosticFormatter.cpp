#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultSymbolVisitor.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter$ForwardingConfiguration.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$MultilineDiagnostic.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$1.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$2.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$ClassNameSimplifier.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/EnumMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef TYPEVAR
#undef WHERE_CLAUSES

using $RichDiagnosticFormatter$WhereClauseKindArray = $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind>;
using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $Context = ::com::sun::tools::javac::util::Context;
using $ForwardingDiagnosticFormatter = ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$MultilineDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic$MultilineDiagnostic;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Options = ::com::sun::tools::javac::util::Options;
using $RichDiagnosticFormatter$1 = ::com::sun::tools::javac::util::RichDiagnosticFormatter$1;
using $RichDiagnosticFormatter$2 = ::com::sun::tools::javac::util::RichDiagnosticFormatter$2;
using $RichDiagnosticFormatter$ClassNameSimplifier = ::com::sun::tools::javac::util::RichDiagnosticFormatter$ClassNameSimplifier;
using $RichDiagnosticFormatter$RichConfiguration = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration;
using $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;
using $RichDiagnosticFormatter$RichPrinter = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichPrinter;
using $RichDiagnosticFormatter$WhereClauseKind = ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $EnumMap = ::java::util::EnumMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

RichDiagnosticFormatter* RichDiagnosticFormatter::instance($Context* context) {
	$init(RichDiagnosticFormatter);
	$var(RichDiagnosticFormatter, instance, $cast(RichDiagnosticFormatter, $nc(context)->get(RichDiagnosticFormatter::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(RichDiagnosticFormatter, context));
	}
	return instance;
}

void RichDiagnosticFormatter::init$($Context* context) {
	$useLocalObjectStack();
	$ForwardingDiagnosticFormatter::init$($$cast($AbstractDiagnosticFormatter, $$nc($Log::instance(context))->getDiagnosticFormatter()));
	$set(this, typePreprocessor, $new($RichDiagnosticFormatter$1, this));
	$set(this, symbolPreprocessor, $new($RichDiagnosticFormatter$2, this));
	setRichPrinter($$new($RichDiagnosticFormatter$RichPrinter, this));
	$set(this, syms, $Symtab::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, messages, $JavacMessages::instance(context));
	$load($RichDiagnosticFormatter$WhereClauseKind);
	$set(this, whereClauses, $new($EnumMap, $RichDiagnosticFormatter$WhereClauseKind::class$));
	$set(this, configuration, $new($RichDiagnosticFormatter$RichConfiguration, $($Options::instance(context)), $cast($AbstractDiagnosticFormatter, this->formatter)));
	{
		$var($RichDiagnosticFormatter$WhereClauseKindArray, arr$, $RichDiagnosticFormatter$WhereClauseKind::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$RichDiagnosticFormatter$WhereClauseKind* kind = arr$->get(i$);
			$nc(this->whereClauses)->put(kind, $$new($LinkedHashMap));
		}
	}
}

$String* RichDiagnosticFormatter::format($JCDiagnostic* diag, $Locale* l) {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	$set(this, nameSimplifier, $new($RichDiagnosticFormatter$ClassNameSimplifier, this));
	{
		$var($RichDiagnosticFormatter$WhereClauseKindArray, arr$, $RichDiagnosticFormatter$WhereClauseKind::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$RichDiagnosticFormatter$WhereClauseKind* kind = arr$->get(i$);
			$$sure($Map, $nc(this->whereClauses)->get(kind))->clear();
		}
	}
	preprocessDiagnostic(diag);
	sb->append($($nc($cast($AbstractDiagnosticFormatter, this->formatter))->format(diag, l)));
	$init($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	if ($$sure($RichDiagnosticFormatter$RichConfiguration, getConfiguration())->isEnabled($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES)) {
		$var($List, clauses, getWhereClauses());
		$var($String, indent, $nc($cast($AbstractDiagnosticFormatter, this->formatter))->isRaw() ? ""_s : $cast($AbstractDiagnosticFormatter, this->formatter)->indentString(2));
		{
			$var($Iterator, i$, $nc(clauses)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCDiagnostic, d, $cast($JCDiagnostic, i$->next()));
				{
					$var($String, whereClause, $nc($cast($AbstractDiagnosticFormatter, this->formatter))->format(d, l));
					if ($nc(whereClause)->length() > 0) {
						sb->append($$str({$$str(u'\n'), indent, whereClause}));
					}
				}
			}
		}
	}
	return sb->toString();
}

$String* RichDiagnosticFormatter::formatMessage($JCDiagnostic* diag, $Locale* l) {
	$set(this, nameSimplifier, $new($RichDiagnosticFormatter$ClassNameSimplifier, this));
	preprocessDiagnostic(diag);
	return $ForwardingDiagnosticFormatter::formatMessage(diag, l);
}

void RichDiagnosticFormatter::setRichPrinter($RichDiagnosticFormatter$RichPrinter* printer) {
	$set(this, printer, printer);
	$nc($cast($AbstractDiagnosticFormatter, this->formatter))->setPrinter(printer);
}

$RichDiagnosticFormatter$RichPrinter* RichDiagnosticFormatter::getRichPrinter() {
	return this->printer;
}

void RichDiagnosticFormatter::preprocessDiagnostic($JCDiagnostic* diag) {
	$useLocalObjectStack();
	{
		$var($ObjectArray, arr$, $nc(diag)->getArgs());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			if (o != nullptr) {
				preprocessArgument(o);
			}
		}
	}
	if (diag->isMultiline()) {
		$var($Iterator, i$, $$nc(diag->getSubdiagnostics())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCDiagnostic, d, $cast($JCDiagnostic, i$->next()));
			preprocessDiagnostic(d);
		}
	}
}

void RichDiagnosticFormatter::preprocessArgument(Object$* arg) {
	$useLocalObjectStack();
	{
		$var($Type, type, nullptr);
		$var($Symbol, symbol, nullptr);
		$var($JCDiagnostic, diagnostic, nullptr);
		$var($Iterable, iterable, nullptr);
		bool var$0 = $instanceOf($Type, arg);
		if (var$0) {
			$assign(type, $cast($Type, arg));
			var$0 = true;
		}
		if (var$0) {
			preprocessType(type);
		} else {
			bool var$1 = $instanceOf($Symbol, arg);
			if (var$1) {
				$assign(symbol, $cast($Symbol, arg));
				var$1 = true;
			}
			if (var$1) {
				preprocessSymbol(symbol);
			} else {
				bool var$2 = $instanceOf($JCDiagnostic, arg);
				if (var$2) {
					$assign(diagnostic, $cast($JCDiagnostic, arg));
					var$2 = true;
				}
				if (var$2) {
					preprocessDiagnostic(diagnostic);
				} else {
					bool var$3 = $instanceOf($Iterable, arg);
					if (var$3) {
						$assign(iterable, $cast($Iterable, arg));
						var$3 = true;
					}
					if (var$3 && !($instanceOf($Path, arg))) {
						$var($Iterator, i$, $nc(iterable)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Object, o, i$->next());
							{
								preprocessArgument(o);
							}
						}
					}
				}
			}
		}
	}
}

$List* RichDiagnosticFormatter::getWhereClauses() {
	$useLocalObjectStack();
	$var($List, clauses, $List::nil());
	{
		$var($RichDiagnosticFormatter$WhereClauseKindArray, arr$, $RichDiagnosticFormatter$WhereClauseKind::values());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RichDiagnosticFormatter$WhereClauseKind* kind = arr$->get(i$);
			{
				$var($List, lines, $List::nil());
				{
					$var($Iterator, i$, $$nc($$sure($Map, $nc(this->whereClauses)->get(kind))->entrySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
						{
							$assign(lines, $nc(lines)->prepend($$cast($JCDiagnostic, $nc(entry)->getValue())));
						}
					}
				}
				if (!$nc(lines)->isEmpty()) {
					$var($String, key, $nc(kind)->key());
					if (lines->size() > 1) {
						$plusAssign(key, ".1"_s);
					}
					$var($JCDiagnostic, d, $nc(this->diags)->fragment(key, $$new($ObjectArray, {$($$sure($Map, $nc(this->whereClauses)->get(kind))->keySet())})));
					$assign(d, $new($JCDiagnostic$MultilineDiagnostic, d, $(lines->reverse())));
					$assign(clauses, $nc(clauses)->prepend(d));
				}
			}
		}
	}
	return $nc(clauses)->reverse();
}

int32_t RichDiagnosticFormatter::indexOf($Type* type, $RichDiagnosticFormatter$WhereClauseKind* kind) {
	$useLocalObjectStack();
	int32_t index = 1;
	{
		$var($Iterator, i$, $$nc($$sure($Map, $nc(this->whereClauses)->get(kind))->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				if ($nc(t)->tsym == $nc(type)->tsym) {
					return index;
				}
				$init($RichDiagnosticFormatter$WhereClauseKind);
				if (kind != $RichDiagnosticFormatter$WhereClauseKind::TYPEVAR || $$nc(t->toString())->equals($(type->toString()))) {
					++index;
				}
			}
		}
	}
	return -1;
}

bool RichDiagnosticFormatter::unique($Type$TypeVar* typevar$renamed) {
	$useLocalObjectStack();
	$var($Type$TypeVar, typevar, typevar$renamed);
	$assign(typevar, $cast($Type$TypeVar, $nc(typevar)->stripMetadata()));
	int32_t found = 0;
	{
		$init($RichDiagnosticFormatter$WhereClauseKind);
		$var($Iterator, i$, $$nc($$sure($Map, $nc(this->whereClauses)->get($RichDiagnosticFormatter$WhereClauseKind::TYPEVAR))->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			if ($$nc($$nc($nc(t)->stripMetadata())->toString())->equals($($nc(typevar)->toString()))) {
				++found;
			}
		}
	}
	if (found < 1) {
		$throwNew($AssertionError, $$of($str({"Missing type variable in where clause: "_s, typevar})));
	}
	return found == 1;
}

void RichDiagnosticFormatter::preprocessType($Type* t) {
	$nc(this->typePreprocessor)->visit(t);
}

void RichDiagnosticFormatter::preprocessSymbol($Symbol* s) {
	$nc(this->symbolPreprocessor)->visit(s, nullptr);
}

$DiagnosticFormatter$Configuration* RichDiagnosticFormatter::getConfiguration() {
	return $cast($RichDiagnosticFormatter$RichConfiguration, this->configuration);
}

$String* RichDiagnosticFormatter::formatMessage($Diagnostic* diag, $Locale* l) {
	return this->formatMessage($cast($JCDiagnostic, diag), l);
}

$String* RichDiagnosticFormatter::format($Diagnostic* diag, $Locale* l) {
	return this->format($cast($JCDiagnostic, diag), l);
}

RichDiagnosticFormatter::RichDiagnosticFormatter() {
}

$Class* RichDiagnosticFormatter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL, $field(RichDiagnosticFormatter, syms)},
		{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(RichDiagnosticFormatter, types)},
		{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $FINAL, $field(RichDiagnosticFormatter, diags)},
		{"messages", "Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $FINAL, $field(RichDiagnosticFormatter, messages)},
		{"nameSimplifier", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$ClassNameSimplifier;", nullptr, $PROTECTED, $field(RichDiagnosticFormatter, nameSimplifier)},
		{"printer", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter;", nullptr, $PRIVATE, $field(RichDiagnosticFormatter, printer)},
		{"whereClauses", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;Ljava/util/Map<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;>;>;", 0, $field(RichDiagnosticFormatter, whereClauses)},
		{"typePreprocessor", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Void;>;", $PROTECTED, $field(RichDiagnosticFormatter, typePreprocessor)},
		{"symbolPreprocessor", "Lcom/sun/tools/javac/code/Types$DefaultSymbolVisitor;", "Lcom/sun/tools/javac/code/Types$DefaultSymbolVisitor<Ljava/lang/Void;Ljava/lang/Void;>;", $PROTECTED, $field(RichDiagnosticFormatter, symbolPreprocessor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(RichDiagnosticFormatter, init$, void, $Context*)},
		{"format", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter, format, $String*, $JCDiagnostic*, $Locale*)},
		{"format", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter, format, $String*, $Diagnostic*, $Locale*)},
		{"formatMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter, formatMessage, $String*, $JCDiagnostic*, $Locale*)},
		{"formatMessage", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter, formatMessage, $String*, $Diagnostic*, $Locale*)},
		{"getConfiguration", "()Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter, getConfiguration, $DiagnosticFormatter$Configuration*)},
		{"getRichPrinter", "()Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter;", nullptr, $PROTECTED, $virtualMethod(RichDiagnosticFormatter, getRichPrinter, $RichDiagnosticFormatter$RichPrinter*)},
		{"getWhereClauses", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PROTECTED, $virtualMethod(RichDiagnosticFormatter, getWhereClauses, $List*)},
		{"indexOf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;)I", nullptr, $PRIVATE, $method(RichDiagnosticFormatter, indexOf, int32_t, $Type*, $RichDiagnosticFormatter$WhereClauseKind*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/RichDiagnosticFormatter;", nullptr, $PUBLIC | $STATIC, $staticMethod(RichDiagnosticFormatter, instance, RichDiagnosticFormatter*, $Context*)},
		{"preprocessArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(RichDiagnosticFormatter, preprocessArgument, void, Object$*)},
		{"preprocessDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PROTECTED, $virtualMethod(RichDiagnosticFormatter, preprocessDiagnostic, void, $JCDiagnostic*)},
		{"preprocessSymbol", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PROTECTED, $virtualMethod(RichDiagnosticFormatter, preprocessSymbol, void, $Symbol*)},
		{"preprocessType", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PROTECTED, $virtualMethod(RichDiagnosticFormatter, preprocessType, void, $Type*)},
		{"setRichPrinter", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter;)V", nullptr, $PROTECTED, $virtualMethod(RichDiagnosticFormatter, setRichPrinter, void, $RichDiagnosticFormatter$RichPrinter*)},
		{"unique", "(Lcom/sun/tools/javac/code/Type$TypeVar;)Z", nullptr, $PRIVATE, $method(RichDiagnosticFormatter, unique, bool, $Type$TypeVar*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration", "com.sun.tools.javac.util.RichDiagnosticFormatter", "RichConfiguration", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichPrinter", "com.sun.tools.javac.util.RichDiagnosticFormatter", "RichPrinter", $PROTECTED},
		{"com.sun.tools.javac.util.RichDiagnosticFormatter$ClassNameSimplifier", "com.sun.tools.javac.util.RichDiagnosticFormatter", "ClassNameSimplifier", $PROTECTED},
		{"com.sun.tools.javac.util.RichDiagnosticFormatter$WhereClauseKind", "com.sun.tools.javac.util.RichDiagnosticFormatter", "WhereClauseKind", $STATIC | $FINAL | $ENUM},
		{"com.sun.tools.javac.util.RichDiagnosticFormatter$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.util.RichDiagnosticFormatter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.RichDiagnosticFormatter",
		"com.sun.tools.javac.util.ForwardingDiagnosticFormatter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/util/ForwardingDiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration,com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature,com.sun.tools.javac.util.RichDiagnosticFormatter$RichPrinter,com.sun.tools.javac.util.RichDiagnosticFormatter$ClassNameSimplifier,com.sun.tools.javac.util.RichDiagnosticFormatter$WhereClauseKind,com.sun.tools.javac.util.RichDiagnosticFormatter$2,com.sun.tools.javac.util.RichDiagnosticFormatter$1"
	};
	$loadClass(RichDiagnosticFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RichDiagnosticFormatter);
	});
	return class$;
}

$Class* RichDiagnosticFormatter::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com