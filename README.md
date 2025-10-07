

---

### **List 1: Question 1 (13 Marks each)**

Scala practical 
1. Write a simple Scala program that prints a welcome message for data scientists.

2. Calculate mean, median, and mode of a list of numbers. Implement basic statistical calculations using Scala collections.

3. Generate a random dataset of 10 numbers and calculate its variance and standard deviation.

4. Create a dense vector using Breeze and calculate its sum, mean, and dot product with another vector.

5. Generate a random matrix using Breeze and compute its transpose and determinant.

6. Slice a Breeze matrix to extract a sub-matrix and calculate its row and column sums.

7. Write a program to perform element-wise addition, subtraction, multiplication, and division of two Breeze matrices.

8.Plot a line graph for a dataset showing a trend over time.

Got it 👍
I see you’ve uploaded an image of **Module 1** (Scala + Breeze practicals). It contains 17 tasks ranging from setting up Scala to statistical calculations, vector/matrix operations with Breeze, CSV handling, missing values, and visualizations.

Here’s what I can do for you:

* I’ll provide **Scala code answers** for **each question (0–16)**.
* I’ll use **Breeze** for vectors/matrices and **Scala collections** where needed.
* For CSV handling, I’ll show examples using `scala-csv`.
* For visualization, I’ll use **Breeze-viz**.

⚡ Because the full solution is long, I’ll give them in **parts** (Q0–Q4 first, then continue).

---

### ✅ Answers (Part 1: Q0 – Q4)

#### 0. Set up Scala and SBT

* Install [Scala](https://www.scala-lang.org/download/) and [SBT](https://www.scala-sbt.org/download.html).
* Check versions:

  ```bash
  scala -version
  sbt sbtVersion
  ```

#### 1. Simple Scala Program

```scala
object WelcomeApp {
  def main(args: Array[String]): Unit = {
    println("Welcome Data Scientists to Scala + Breeze!")
  }
}
```

#### 2. Mean, Median, Mode

```scala
object StatsExample {
  def main(args: Array[String]): Unit = {
    val numbers = List(1, 2, 2, 3, 4, 5, 5, 5, 6)

    val mean = numbers.sum.toDouble / numbers.size
    val sorted = numbers.sorted
    val median = if (numbers.size % 2 == 0) 
      (sorted(numbers.size/2 - 1) + sorted(numbers.size/2)).toDouble / 2
    else 
      sorted(numbers.size/2)

    val mode = numbers.groupBy(identity).mapValues(_.size).maxBy(_._2)._1

    println(s"Mean = $mean, Median = $median, Mode = $mode")
  }
}
```

#### 3. Random Dataset (Variance & Std Dev)

```scala
import scala.util.Random
import breeze.stats._

object RandomDataset {
  def main(args: Array[String]): Unit = {
    val data = Array.fill(10)(Random.nextInt(100).toDouble)
    println("Data: " + data.mkString(", "))

    val varianceValue = variance(data)
    val stdDev = stddev(data)

    println(s"Variance = $varianceValue, Std Dev = $stdDev")
  }
}
```

#### 4. Dense Vector (Breeze)

```scala
import breeze.linalg._

object BreezeVectorExample {
  def main(args: Array[String]): Unit = {
    val v1 = DenseVector(1.0, 2.0, 3.0, 4.0)
    val v2 = DenseVector(2.0, 3.0, 4.0, 5.0)

    println(s"Sum = ${sum(v1)}")
    println(s"Mean = ${mean(v1)}")
    println(s"Dot Product = ${v1 dot v2}")
  }
}
```

---

👉 Do you want me to continue with **Q5–Q16 (matrix ops, CSV, missing values, visualization, etc.)** in the same style (complete Scala + Breeze code), or should I break it into smaller chunks for easier understanding?

Perfect 👍 Let’s continue.
Here’s **Part 2 (Q5–Q9)** with full Scala + Breeze code.

---

### ✅ Answers (Part 2: Q5 – Q9)

#### 5. Generate Random Matrix (Transpose & Determinant)

```scala
import breeze.linalg._
import scala.util.Random

object BreezeMatrixExample {
  def main(args: Array[String]): Unit = {
    val mat = DenseMatrix.rand[Double](3, 3) // 3x3 random matrix
    println("Matrix:\n" + mat)

    val transpose = mat.t
    println("Transpose:\n" + transpose)

    val determinant = det(mat)
    println(s"Determinant = $determinant")
  }
}
```

---

#### 6. Slice Matrix & Calculate Row/Column Sums

```scala
import breeze.linalg._

object MatrixSliceExample {
  def main(args: Array[String]): Unit = {
    val mat = DenseMatrix((1,2,3),(4,5,6),(7,8,9))
    println("Matrix:\n" + mat)

    val subMat = mat(0 to 1, 0 to 1)  // slice top-left 2x2
    println("Sub-Matrix:\n" + subMat)

    println("Row Sums: " + sum(subMat(*, ::)))   // along rows
    println("Col Sums: " + sum(subMat(::, *)))   // along columns
  }
}
```

---

#### 7. Element-wise Matrix Operations

```scala
import breeze.linalg._

object MatrixOps {
  def main(args: Array[String]): Unit = {
    val A = DenseMatrix((1.0,2.0),(3.0,4.0))
    val B = DenseMatrix((5.0,6.0),(7.0,8.0))

    println("Addition:\n" + (A + B))
    println("Subtraction:\n" + (A - B))
    println("Multiplication:\n" + (A :* B)) // element-wise
    println("Division:\n" + (A :/ B))       // element-wise
  }
}
```

---

#### 8. Read CSV & Calculate Statistics

```scala
import com.github.tototoshi.csv._
import breeze.stats._

import java.io.File

object CSVExample {
  def main(args: Array[String]): Unit = {
    val reader = CSVReader.open(new File("data.csv"))
    val data = reader.allWithHeaders()
    reader.close()

    val column = data.map(_("value").toDouble)  // assuming column name is "value"
    println("Mean = " + mean(column))
    println("Variance = " + variance(column))
    println("Std Dev = " + stddev(column))
  }
}
```

*(Make sure you add the library in `build.sbt`)*

```sbt
libraryDependencies += "com.github.tototoshi" %% "scala-csv" % "1.3.10"
```

---



---

👉 Next, I’ll give you **Part 3 (Q10–Q16: filtering, tokenizing, one-hot encoding, scatter/histogram/line plots, combining plots with Breeze-viz).**

Do you want me to also include **build.sbt setup with Breeze and Breeze-viz dependencies** before continuing?
Great ✅
Before moving to **Part 3 (Q10–Q16)**, here’s how your **`build.sbt`** should look so all Breeze, CSV, and visualization features work properly.

---

### 📌 `build.sbt` Setup

```sbt
name := "ScalaBreezePractical"

version := "0.1"

scalaVersion := "2.13.12"   // You can also use Scala 3 if you prefer

// Dependencies
libraryDependencies ++= Seq(
  "org.scalanlp" %% "breeze" % "2.1.0",              // Breeze core
  "org.scalanlp" %% "breeze-viz" % "2.1.0",          // Breeze visualization
  "com.github.tototoshi" %% "scala-csv" % "1.3.10"   // CSV handling
)

// For plotting (Breeze-viz uses JFreeChart under the hood)
resolvers += "Sonatype Releases" at "https://oss.sonatype.org/content/repositories/releases/"
```

⚡ After saving, run:

```bash
sbt update
sbt compile
```






#### 15. Line Graph

```scala
import breeze.plot._
import breeze.linalg._

object LineGraphExample {
  def main(args: Array[String]): Unit = {
    val x = linspace(0.0, 10.0, 100)
    val y = x.map(math.sin)

    val f = Figure()
    val p = f.subplot(0)
    p += plot(x, y, colorcode = "red")
    p.title = "Sine Wave"
    p.xlabel = "X"
    p.ylabel = "sin(X)"
    f.refresh()
  }
}
```

---

