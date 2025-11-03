#ifndef _java_sql_DatabaseMetaData_h_
#define _java_sql_DatabaseMetaData_h_
//$ interface java.sql.DatabaseMetaData
//$ extends java.sql.Wrapper

#include <java/lang/Array.h>
#include <java/sql/Wrapper.h>

namespace java {
	namespace sql {
		class Connection;
		class ResultSet;
		class RowIdLifetime;
	}
}

namespace java {
	namespace sql {

class $import DatabaseMetaData : public ::java::sql::Wrapper {
	$interface(DatabaseMetaData, $NO_CLASS_INIT, ::java::sql::Wrapper)
public:
	virtual bool allProceduresAreCallable() {return false;}
	virtual bool allTablesAreSelectable() {return false;}
	virtual bool autoCommitFailureClosesAllResultSets() {return false;}
	virtual bool dataDefinitionCausesTransactionCommit() {return false;}
	virtual bool dataDefinitionIgnoredInTransactions() {return false;}
	virtual bool deletesAreDetected(int32_t type) {return false;}
	virtual bool doesMaxRowSizeIncludeBlobs() {return false;}
	virtual bool generatedKeyAlwaysReturned() {return false;}
	virtual ::java::sql::ResultSet* getAttributes($String* catalog, $String* schemaPattern, $String* typeNamePattern, $String* attributeNamePattern) {return nullptr;}
	virtual ::java::sql::ResultSet* getBestRowIdentifier($String* catalog, $String* schema, $String* table, int32_t scope, bool nullable) {return nullptr;}
	virtual $String* getCatalogSeparator() {return nullptr;}
	virtual $String* getCatalogTerm() {return nullptr;}
	virtual ::java::sql::ResultSet* getCatalogs() {return nullptr;}
	virtual ::java::sql::ResultSet* getClientInfoProperties() {return nullptr;}
	virtual ::java::sql::ResultSet* getColumnPrivileges($String* catalog, $String* schema, $String* table, $String* columnNamePattern) {return nullptr;}
	virtual ::java::sql::ResultSet* getColumns($String* catalog, $String* schemaPattern, $String* tableNamePattern, $String* columnNamePattern) {return nullptr;}
	virtual ::java::sql::Connection* getConnection() {return nullptr;}
	virtual ::java::sql::ResultSet* getCrossReference($String* parentCatalog, $String* parentSchema, $String* parentTable, $String* foreignCatalog, $String* foreignSchema, $String* foreignTable) {return nullptr;}
	virtual int32_t getDatabaseMajorVersion() {return 0;}
	virtual int32_t getDatabaseMinorVersion() {return 0;}
	virtual $String* getDatabaseProductName() {return nullptr;}
	virtual $String* getDatabaseProductVersion() {return nullptr;}
	virtual int32_t getDefaultTransactionIsolation() {return 0;}
	virtual int32_t getDriverMajorVersion() {return 0;}
	virtual int32_t getDriverMinorVersion() {return 0;}
	virtual $String* getDriverName() {return nullptr;}
	virtual $String* getDriverVersion() {return nullptr;}
	virtual ::java::sql::ResultSet* getExportedKeys($String* catalog, $String* schema, $String* table) {return nullptr;}
	virtual $String* getExtraNameCharacters() {return nullptr;}
	virtual ::java::sql::ResultSet* getFunctionColumns($String* catalog, $String* schemaPattern, $String* functionNamePattern, $String* columnNamePattern) {return nullptr;}
	virtual ::java::sql::ResultSet* getFunctions($String* catalog, $String* schemaPattern, $String* functionNamePattern) {return nullptr;}
	virtual $String* getIdentifierQuoteString() {return nullptr;}
	virtual ::java::sql::ResultSet* getImportedKeys($String* catalog, $String* schema, $String* table) {return nullptr;}
	virtual ::java::sql::ResultSet* getIndexInfo($String* catalog, $String* schema, $String* table, bool unique, bool approximate) {return nullptr;}
	virtual int32_t getJDBCMajorVersion() {return 0;}
	virtual int32_t getJDBCMinorVersion() {return 0;}
	virtual int32_t getMaxBinaryLiteralLength() {return 0;}
	virtual int32_t getMaxCatalogNameLength() {return 0;}
	virtual int32_t getMaxCharLiteralLength() {return 0;}
	virtual int32_t getMaxColumnNameLength() {return 0;}
	virtual int32_t getMaxColumnsInGroupBy() {return 0;}
	virtual int32_t getMaxColumnsInIndex() {return 0;}
	virtual int32_t getMaxColumnsInOrderBy() {return 0;}
	virtual int32_t getMaxColumnsInSelect() {return 0;}
	virtual int32_t getMaxColumnsInTable() {return 0;}
	virtual int32_t getMaxConnections() {return 0;}
	virtual int32_t getMaxCursorNameLength() {return 0;}
	virtual int32_t getMaxIndexLength() {return 0;}
	virtual int64_t getMaxLogicalLobSize();
	virtual int32_t getMaxProcedureNameLength() {return 0;}
	virtual int32_t getMaxRowSize() {return 0;}
	virtual int32_t getMaxSchemaNameLength() {return 0;}
	virtual int32_t getMaxStatementLength() {return 0;}
	virtual int32_t getMaxStatements() {return 0;}
	virtual int32_t getMaxTableNameLength() {return 0;}
	virtual int32_t getMaxTablesInSelect() {return 0;}
	virtual int32_t getMaxUserNameLength() {return 0;}
	virtual $String* getNumericFunctions() {return nullptr;}
	virtual ::java::sql::ResultSet* getPrimaryKeys($String* catalog, $String* schema, $String* table) {return nullptr;}
	virtual ::java::sql::ResultSet* getProcedureColumns($String* catalog, $String* schemaPattern, $String* procedureNamePattern, $String* columnNamePattern) {return nullptr;}
	virtual $String* getProcedureTerm() {return nullptr;}
	virtual ::java::sql::ResultSet* getProcedures($String* catalog, $String* schemaPattern, $String* procedureNamePattern) {return nullptr;}
	virtual ::java::sql::ResultSet* getPseudoColumns($String* catalog, $String* schemaPattern, $String* tableNamePattern, $String* columnNamePattern) {return nullptr;}
	virtual int32_t getResultSetHoldability() {return 0;}
	virtual ::java::sql::RowIdLifetime* getRowIdLifetime() {return nullptr;}
	virtual $String* getSQLKeywords() {return nullptr;}
	virtual int32_t getSQLStateType() {return 0;}
	virtual $String* getSchemaTerm() {return nullptr;}
	virtual ::java::sql::ResultSet* getSchemas() {return nullptr;}
	virtual ::java::sql::ResultSet* getSchemas($String* catalog, $String* schemaPattern) {return nullptr;}
	virtual $String* getSearchStringEscape() {return nullptr;}
	virtual $String* getStringFunctions() {return nullptr;}
	virtual ::java::sql::ResultSet* getSuperTables($String* catalog, $String* schemaPattern, $String* tableNamePattern) {return nullptr;}
	virtual ::java::sql::ResultSet* getSuperTypes($String* catalog, $String* schemaPattern, $String* typeNamePattern) {return nullptr;}
	virtual $String* getSystemFunctions() {return nullptr;}
	virtual ::java::sql::ResultSet* getTablePrivileges($String* catalog, $String* schemaPattern, $String* tableNamePattern) {return nullptr;}
	virtual ::java::sql::ResultSet* getTableTypes() {return nullptr;}
	virtual ::java::sql::ResultSet* getTables($String* catalog, $String* schemaPattern, $String* tableNamePattern, $StringArray* types) {return nullptr;}
	virtual $String* getTimeDateFunctions() {return nullptr;}
	virtual ::java::sql::ResultSet* getTypeInfo() {return nullptr;}
	virtual ::java::sql::ResultSet* getUDTs($String* catalog, $String* schemaPattern, $String* typeNamePattern, $ints* types) {return nullptr;}
	virtual $String* getURL() {return nullptr;}
	virtual $String* getUserName() {return nullptr;}
	virtual ::java::sql::ResultSet* getVersionColumns($String* catalog, $String* schema, $String* table) {return nullptr;}
	virtual bool insertsAreDetected(int32_t type) {return false;}
	virtual bool isCatalogAtStart() {return false;}
	virtual bool isReadOnly() {return false;}
	virtual bool locatorsUpdateCopy() {return false;}
	virtual bool nullPlusNonNullIsNull() {return false;}
	virtual bool nullsAreSortedAtEnd() {return false;}
	virtual bool nullsAreSortedAtStart() {return false;}
	virtual bool nullsAreSortedHigh() {return false;}
	virtual bool nullsAreSortedLow() {return false;}
	virtual bool othersDeletesAreVisible(int32_t type) {return false;}
	virtual bool othersInsertsAreVisible(int32_t type) {return false;}
	virtual bool othersUpdatesAreVisible(int32_t type) {return false;}
	virtual bool ownDeletesAreVisible(int32_t type) {return false;}
	virtual bool ownInsertsAreVisible(int32_t type) {return false;}
	virtual bool ownUpdatesAreVisible(int32_t type) {return false;}
	virtual bool storesLowerCaseIdentifiers() {return false;}
	virtual bool storesLowerCaseQuotedIdentifiers() {return false;}
	virtual bool storesMixedCaseIdentifiers() {return false;}
	virtual bool storesMixedCaseQuotedIdentifiers() {return false;}
	virtual bool storesUpperCaseIdentifiers() {return false;}
	virtual bool storesUpperCaseQuotedIdentifiers() {return false;}
	virtual bool supportsANSI92EntryLevelSQL() {return false;}
	virtual bool supportsANSI92FullSQL() {return false;}
	virtual bool supportsANSI92IntermediateSQL() {return false;}
	virtual bool supportsAlterTableWithAddColumn() {return false;}
	virtual bool supportsAlterTableWithDropColumn() {return false;}
	virtual bool supportsBatchUpdates() {return false;}
	virtual bool supportsCatalogsInDataManipulation() {return false;}
	virtual bool supportsCatalogsInIndexDefinitions() {return false;}
	virtual bool supportsCatalogsInPrivilegeDefinitions() {return false;}
	virtual bool supportsCatalogsInProcedureCalls() {return false;}
	virtual bool supportsCatalogsInTableDefinitions() {return false;}
	virtual bool supportsColumnAliasing() {return false;}
	virtual bool supportsConvert() {return false;}
	virtual bool supportsConvert(int32_t fromType, int32_t toType) {return false;}
	virtual bool supportsCoreSQLGrammar() {return false;}
	virtual bool supportsCorrelatedSubqueries() {return false;}
	virtual bool supportsDataDefinitionAndDataManipulationTransactions() {return false;}
	virtual bool supportsDataManipulationTransactionsOnly() {return false;}
	virtual bool supportsDifferentTableCorrelationNames() {return false;}
	virtual bool supportsExpressionsInOrderBy() {return false;}
	virtual bool supportsExtendedSQLGrammar() {return false;}
	virtual bool supportsFullOuterJoins() {return false;}
	virtual bool supportsGetGeneratedKeys() {return false;}
	virtual bool supportsGroupBy() {return false;}
	virtual bool supportsGroupByBeyondSelect() {return false;}
	virtual bool supportsGroupByUnrelated() {return false;}
	virtual bool supportsIntegrityEnhancementFacility() {return false;}
	virtual bool supportsLikeEscapeClause() {return false;}
	virtual bool supportsLimitedOuterJoins() {return false;}
	virtual bool supportsMinimumSQLGrammar() {return false;}
	virtual bool supportsMixedCaseIdentifiers() {return false;}
	virtual bool supportsMixedCaseQuotedIdentifiers() {return false;}
	virtual bool supportsMultipleOpenResults() {return false;}
	virtual bool supportsMultipleResultSets() {return false;}
	virtual bool supportsMultipleTransactions() {return false;}
	virtual bool supportsNamedParameters() {return false;}
	virtual bool supportsNonNullableColumns() {return false;}
	virtual bool supportsOpenCursorsAcrossCommit() {return false;}
	virtual bool supportsOpenCursorsAcrossRollback() {return false;}
	virtual bool supportsOpenStatementsAcrossCommit() {return false;}
	virtual bool supportsOpenStatementsAcrossRollback() {return false;}
	virtual bool supportsOrderByUnrelated() {return false;}
	virtual bool supportsOuterJoins() {return false;}
	virtual bool supportsPositionedDelete() {return false;}
	virtual bool supportsPositionedUpdate() {return false;}
	virtual bool supportsRefCursors();
	virtual bool supportsResultSetConcurrency(int32_t type, int32_t concurrency) {return false;}
	virtual bool supportsResultSetHoldability(int32_t holdability) {return false;}
	virtual bool supportsResultSetType(int32_t type) {return false;}
	virtual bool supportsSavepoints() {return false;}
	virtual bool supportsSchemasInDataManipulation() {return false;}
	virtual bool supportsSchemasInIndexDefinitions() {return false;}
	virtual bool supportsSchemasInPrivilegeDefinitions() {return false;}
	virtual bool supportsSchemasInProcedureCalls() {return false;}
	virtual bool supportsSchemasInTableDefinitions() {return false;}
	virtual bool supportsSelectForUpdate() {return false;}
	virtual bool supportsSharding();
	virtual bool supportsStatementPooling() {return false;}
	virtual bool supportsStoredFunctionsUsingCallSyntax() {return false;}
	virtual bool supportsStoredProcedures() {return false;}
	virtual bool supportsSubqueriesInComparisons() {return false;}
	virtual bool supportsSubqueriesInExists() {return false;}
	virtual bool supportsSubqueriesInIns() {return false;}
	virtual bool supportsSubqueriesInQuantifieds() {return false;}
	virtual bool supportsTableCorrelationNames() {return false;}
	virtual bool supportsTransactionIsolationLevel(int32_t level) {return false;}
	virtual bool supportsTransactions() {return false;}
	virtual bool supportsUnion() {return false;}
	virtual bool supportsUnionAll() {return false;}
	virtual bool updatesAreDetected(int32_t type) {return false;}
	virtual bool usesLocalFilePerTable() {return false;}
	virtual bool usesLocalFiles() {return false;}
	static const int32_t procedureResultUnknown = 0;
	static const int32_t procedureNoResult = 1;
	static const int32_t procedureReturnsResult = 2;
	static const int32_t procedureColumnUnknown = 0;
	static const int32_t procedureColumnIn = 1;
	static const int32_t procedureColumnInOut = 2;
	static const int32_t procedureColumnOut = 4;
	static const int32_t procedureColumnReturn = 5;
	static const int32_t procedureColumnResult = 3;
	static const int32_t procedureNoNulls = 0;
	static const int32_t procedureNullable = 1;
	static const int32_t procedureNullableUnknown = 2;
	static const int32_t columnNoNulls = 0;
	static const int32_t columnNullable = 1;
	static const int32_t columnNullableUnknown = 2;
	static const int32_t bestRowTemporary = 0;
	static const int32_t bestRowTransaction = 1;
	static const int32_t bestRowSession = 2;
	static const int32_t bestRowUnknown = 0;
	static const int32_t bestRowNotPseudo = 1;
	static const int32_t bestRowPseudo = 2;
	static const int32_t versionColumnUnknown = 0;
	static const int32_t versionColumnNotPseudo = 1;
	static const int32_t versionColumnPseudo = 2;
	static const int32_t importedKeyCascade = 0;
	static const int32_t importedKeyRestrict = 1;
	static const int32_t importedKeySetNull = 2;
	static const int32_t importedKeyNoAction = 3;
	static const int32_t importedKeySetDefault = 4;
	static const int32_t importedKeyInitiallyDeferred = 5;
	static const int32_t importedKeyInitiallyImmediate = 6;
	static const int32_t importedKeyNotDeferrable = 7;
	static const int32_t typeNoNulls = 0;
	static const int32_t typeNullable = 1;
	static const int32_t typeNullableUnknown = 2;
	static const int32_t typePredNone = 0;
	static const int32_t typePredChar = 1;
	static const int32_t typePredBasic = 2;
	static const int32_t typeSearchable = 3;
	static const int16_t tableIndexStatistic = 0;
	static const int16_t tableIndexClustered = 1;
	static const int16_t tableIndexHashed = 2;
	static const int16_t tableIndexOther = 3;
	static const int16_t attributeNoNulls = 0;
	static const int16_t attributeNullable = 1;
	static const int16_t attributeNullableUnknown = 2;
	static const int32_t sqlStateXOpen = 1;
	static const int32_t sqlStateSQL = 2;
	static const int32_t sqlStateSQL99 = sqlStateSQL;
	static const int32_t functionColumnUnknown = 0;
	static const int32_t functionColumnIn = 1;
	static const int32_t functionColumnInOut = 2;
	static const int32_t functionColumnOut = 3;
	static const int32_t functionReturn = 4;
	static const int32_t functionColumnResult = 5;
	static const int32_t functionNoNulls = 0;
	static const int32_t functionNullable = 1;
	static const int32_t functionNullableUnknown = 2;
	static const int32_t functionResultUnknown = 0;
	static const int32_t functionNoTable = 1;
	static const int32_t functionReturnsTable = 2;
};

	} // sql
} // java

#endif // _java_sql_DatabaseMetaData_h_