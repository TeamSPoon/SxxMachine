package SxxMachine;

/**
 * Superclass any single step operation in the Prolog interpreter.
 * <p>
 * Most implementations should sublass {@link Predicate} instead to gain the
 * common {@link Predicate#cont} field to store the next step of the program.
 *
 * @author Mutsunori Banbara (banbara@kobe-u.ac.jp)
 * @author Naoyuki Tamura (tamura@kobe-u.ac.jp)
 * @version 1.0
 */
@FunctionalInterface
public interface IOperation {
	/**
	 * Executes this operation and returns a continuation goal.
	 *
	 * @param prolog current Prolog engine
	 * @exception PrologException if a Prolog exception is raised.
	 * @see Prolog
	 */
	public Operation Exec(Prolog prolog);
}
