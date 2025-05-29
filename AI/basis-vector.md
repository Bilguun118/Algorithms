# Basis Vector

A basis vector is a building block that you can use to create any other vector in a space — through addition and scaling.
- Inputs, weights, and outputs are all vectors in high-dimensional space.
- The weight matrix in a neural layer transforms one set of basis vectors into another.

## Example
    e₁ = [1, 0]  → points right (x-direction)
    e₂ = [0, 1]  → points up   (y-direction)
    [3, 2] = 3 * e₁ + 2 * e₂
## Properties of Basis Vector
    Linearly independent (no vector can be written as a combination of the others).
    Span the space (you can reach any vector in that space using them).
    Usually normalized and orthogonal (especially in standard basis).


## Why Are Basis Vectors Important in Neural Networks?
    -Inputs, weights, and outputs are all vectors in high-dimensional space.
    - The weight matrix in a neural layer transforms one set of basis vectors into another.
    - Understanding basis helps you understand:
    - Projection
    - Dimensionality reduction (e.g., PCA)
    - Feature transformation